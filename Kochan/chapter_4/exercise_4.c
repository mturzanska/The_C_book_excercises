#include <stdio.h>

int main (void)
{
    int n, agg;
    for ( n = 1, agg = 1; n <= 10; n++, agg *= n ) {
        printf("%3i  %i\n", n, agg);

    }

    return 0;
}
