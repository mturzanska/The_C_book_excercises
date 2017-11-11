// Program to generate a table of prime numbers

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    int p, d;
    bool isPrime;

    for ( p = 2; p <= 50; ++p ) {
        if ( p % 2 == 0 && p != 0) {
            continue;
        }
        isPrime = true;

        for ( d = 2; (d < p && isPrime); ++d )
            if ( d % 2 == 0 && d != 0) {
                continue;
            }
            if ( p % d == 0 )
                isPrime = false;
            if ( isPrime == true )
                printf ("%i ", p);
    }

    printf("\n");
    return 0;
}
