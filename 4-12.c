# include <stdio.h>

char slowko[10];
int idx = 0;
int sign = 1;

void printd(int n)
{
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    if (n / 10)
        printd(n / 10);
    putchar(n % 10 + '0');
}

void itoa(int n)
{
    if (n < 0) {
        n = -n;
        slowko[idx++] = '-';
    }
    if (n / 10 >= 1)
        itoa(n / 10);
    slowko[idx++] = n % 10 + '0';
}

void main()
{
    int numerek =  -5467;
    itoa(numerek);
    printf("%s\n", slowko);

}

