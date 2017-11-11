#include <stdio.h>

int main (void)
{
    int number, digit, sum;
    sum = 0;

    printf ("Give me a positive integer\n");
    scanf ("%i", &number);

    while ( number != 0 ) {
        digit = number % 10;
        number /= 10;
        sum += digit;
    }

    printf("The sum of digits %i\n", sum);

    return 0;
}
