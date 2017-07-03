#include <math.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>  /* for atof() */

#define MAXOP 100 /* max size of operand or operator */
#define NUMBER '1' /* signal that a number was found */
#define NNUMBER '0' /* signal that a number was found */
#define MAXVAL 100 /* maximum depth of val stack */

int sp = 0; /* next free stack position */
double val[MAXVAL]; /* value stack */
double dupval[MAXVAL]; /* duplicate of value stack */

void push(double f) /* push f onto value stack */
{
    if (sp < MAXVAL) {
        val[sp++] = f;
    } else
        printf("error: stack full, can't push %g\n", f);
}

double pop(void) /*pop and return top value from stack*/
{
    if (sp > 0)
        return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}

void print()
{
    printf("%f\n", val[sp]);
}

void duplicate()
{
    int i;
    for (i = 0; val[i] != '\0'; ++i)
        dupval[i] = val[i];
    dupval[i] = '\0';
}

void swap()
{
    double last;
    double penult;
    if (sp > 0) 
    last = val[sp];
    penult = val[sp - 1];
    val[sp] = penult;
    val[sp - 1] = last;
}

void clear()
{
    sp = 0;
    val[sp] = '\0';
}

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}


int getop(char s[])
{
    int i, c;
    while ((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    if (!isdigit(c) && c != '.' && c != '-') {
        if (c == 'c' || c == 'd' || c == 's' || c == 'p')
            getchar();
        return c;
    }
    if (c == '-') {
        c = getch();
        if (!isdigit(c))
            return '-';
        ungetch(c);
    }
    i = 0;
    if (isdigit(c))
        while (isdigit(s[++i] = c = getch()))
            ;
    if (c == '.')
        while (isdigit(s[++i] = c = getch()))
            ;
    s[i] = '\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;
}

main()
{
    int stack_i;
    int top_n;
    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF) {
        switch (type) {
            case NUMBER:
                push(atof(s));
                break;
            case 'p':
                print();
                break;
            case 'c':
                clear();
                break;
            case 's':
                swap();
                break;
            case 'd':
                duplicate();
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '%':
                op2 = pop();
                push((int) pop() % (int) op2);
                break;
            case '-':
                op2 = pop();
                /* because + and * are commutative operators order was irreleevant */
                push(pop() - op2);
                break;
            case '/':
                op2 = pop();
                if (op2 != 0.0)
                    push(pop() / op2);
                else
                    printf("error: zero divisor\n");
                break;
            case '\n':
                printf("\t%.8g\n", pop());
                break;
            default:
                printf("error: unknwon command %s\n", s);
                break;
        }
    }
    return 0;
}
