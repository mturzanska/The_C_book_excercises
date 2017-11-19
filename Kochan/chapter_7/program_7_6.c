#include <stdio.h>

int gcd (int u, int v)
{
    int temp;

    while ( v != 0 ) {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

int main (void)
{
    int result;

    result = gcd(150, 35);
    printf("Gcd of 150 and 35 is %i\n", result);

    return 0;
}
