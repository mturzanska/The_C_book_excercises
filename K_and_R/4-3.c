#include <math.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>  /* for atof() */
#include <string.h>

#define MAXOP 100 /* max size of operand or operator */
#define NUMBER '1' /* signal that a number was found */
#define COMMAND 'c' /* signal that a command was found */

#define MAXVAL 100 /* maximum depth of val stack */

int sp = 0; /* next free stack position */
double val[MAXVAL]; /* value stack */
double dupval[MAXVAL]; /* duplicate of value stack */
double vars[MAXVAL]; /* user defined variables storage */

int command_mode = 0;

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
    i = 0;
    if (isalpha(c)) {
        command_mode = 1;
        while (isalpha(s[++i] = c = getch()))
            ;
        s[i] = '\0';
        if (c != EOF)
            ungetch(c);
        return COMMAND;
    }
    if (!isdigit(c) && c != '.' && c != '-')
        return c;
    if (c == '-') {     /* add support for negative numbers */
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
            case COMMAND:
                if (0 == strcmp(s, "dup")) {
                    duplicate();
                }
                else if(0 == strcmp(s, "swap")) {
                    swap();
                }
                else if(0 == strcmp(s, "print")) {
                    print();
                }
                else if(0 == strcmp(s, "clear")) {
                    clear();
                }
                else if(0 == strcmp(s, "sin")) {
                    command_mode = 0;
                    push(sin(pop()));
                }
                else if(0 == strcmp(s, "exp")) {
                    command_mode = 0;
                    push(exp(pop()));
                }
                else if(0 == strcmp(s, "pow")) {
                    command_mode = 0;
                    op2 = pop();
                    push(pow(pop(), op2));
                }
                else if(0 == strcmp(s, "store")) {
                    command_mode = 0;
                    op2 = pop();
                    vars[(int)op2] = pop();
                }
                else if(0 == strcmp(s, "read")) {
                    command_mode = 0;
                    push(vars[(int) pop()]);
                }
                else {
                    printf("Sorry, unknown command: %s\n", s);
                }
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
                if (command_mode == 0)
                    printf("\t%.8g\n", pop());
                else {
                    command_mode = 0;
                    printf("\n");
                }
                break;
            default:
                printf("error: unknwon command %s\n", s);
                break;
        }
    }
    return 0;
}
