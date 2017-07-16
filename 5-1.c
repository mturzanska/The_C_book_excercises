#include <ctype.h>
#include <stdio.h>

#define ARRSIZE 200
#define BUFSIZE 100

char buf[BUFSIZE]; /* buffer for ungetch */
int bufp = 0; /* next free position in buf */
int getchar(void);

int getch(void) /* get a possibly pushed-back character */
{
    return (bufp > 0) ? buf[--bufp]: getchar();
}

void ungetch(int c)
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}

/* getint: get next integer from input into *pn */

int getint(int *pn)
{
    int c, fc, sign;
    while (isspace(c = getch()))
        ;
    if (!isdigit(c) && c != '\n' && c != '+' && c != '-') {
        ungetch(c); /* it is not a number */
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-') {
        fc = getch();
        if (!isdigit(fc))
            ungetch(c);
        c = fc;
    }
    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');
    *pn *= sign;
    if (c != '\n')
        ungetch(c);
    return c;
}

void main()
{
    int n, array[ARRSIZE];
    for (n = 0; n < ARRSIZE && getint(&array[n]) != '\n'; n++)
        ;
    for (n = 0; array[n] != '\0'; n++)
        printf("%d\n", array[n]);

}
