// Program to generate the first 15 Fibonacci numbers

#include <stdio.h>

int main (void)
{
    int prev_prev = 0;
    int prev = 1;
    int current;

    for ( int i = 0; i < 15; ++i ) {
        current = prev_prev + prev;
        prev_prev = prev;
        prev = current;
        printf ("%i\n", current);
    }

    return 0;
}
