#include <stdio.h>

int main (void)
{
    float dividend, divisor;

    printf ("Give me a dividend and a divisor\n");
    scanf ("%f %f", &dividend, &divisor);

    if ( divisor == 0 )
        printf ("Division by 0! Sorry, no can do\n");
    else
        printf ("The result of division is %.3f\n",
                dividend / divisor);

    return 0;
}
