#include <stdio.h>

int main (void)
{
    int dividend, divisor, remainder;

    printf ("Give me to integers\n");
    scanf ("%i %i", &dividend, &divisor);

    remainder = dividend % divisor;

    if ( remainder == 0 )
        printf ("%i is evenly divisble by %i\n", dividend, divisor);
    else
        printf ("%i is not evenly divisble by %i\n", dividend, divisor);

    return 0;
}
