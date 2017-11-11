#include <stdbool.h>
#include <stdio.h>

int main (void)
{
    int number, right_digit;
    bool is_negative = false;

    printf ("Enter your number\n");
    scanf ("%i", &number);

    if (number < 0) {
        is_negative = true;
        number *= -1;
    }

    do {
        right_digit = number % 10;
        printf("%i", right_digit);
        number /= 10;
    } while ( number != 0 );

    if (is_negative)
        printf("-\n");
    else
        printf("\n");

    return 0;
}
