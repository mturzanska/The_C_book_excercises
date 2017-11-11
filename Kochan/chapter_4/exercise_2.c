#include <stdio.h>

int main (void)
{
    printf("n    n^2\n");
    printf("--  ----\n");

    for ( int n = 1; n <= 10; n++ ) {
        printf("%2i  %i\n", n, n * n );
    }

    return 0;
}
