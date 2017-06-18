#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int get_len(char text[])
{
    int i = 0;
    while (text[i] != '\0')
        ++i;
    return i;
}

void reverse(char text[], char reversed[], int len)
{
    int i;
    for (i = 0; i <= len && text[i] != '\0'; ++i)
        reversed[len - i - 1] = text[i];
    reversed[i] = '\0';
}


void itoa(int n, char s[], int is_2c)
{
    int i, sign;
    if (!(is_2c)) {
        if ((sign = n) < 0)
            n = -n;
    }
    i = 0;
    do {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    if (sign < 0)
        s[i++] = '-';
    else if (is_2c)
        if (s[i] = 1)
            s[i++] = '-';
    s[i] = '\0';
}

void main()
{
    int input_int = 11000000;
    char int_repr[MAX_LEN];
    char rev_repr[MAX_LEN];
    int is_2c = 1;
    int len;
    itoa(input_int, int_repr, is_2c);
    len = get_len(int_repr);
    reverse(int_repr, rev_repr, len);
    printf("%s\n", rev_repr);
}
