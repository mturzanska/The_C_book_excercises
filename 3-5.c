#include <stdio.h>
#include "3-4.c"

void itob(int n, char s[], int b)
{
    int HEXS[16] = {
        '0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'
    };
    int digit;
    int counter = 0;
    do {
        digit = n % b;
        n /= b;
        if (b != 16)
            s[counter] = digit + '0';
        else
            s[counter] = HEXS[digit];
        counter++;
    }
    while (n > 0);

    s[counter] = '\0';
}

void main()
{
    char digits[MAX_LEN];
    char rev_digits[MAX_LEN];
    int n = 11;
    int base = 16;
    int len;
    itob(n, digits, base);
    len = get_len(digits);
    reverse(digits, rev_digits, len);
    printf("%s\n", rev_digits);
}
