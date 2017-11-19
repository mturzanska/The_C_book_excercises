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

int lcm (int u, int v)
{
    int gcd (int u, int v);
    return u * v / gcd(u, v);
}

int main (void)
{
    int u, v;
    int lcm (int u, int v);

    printf("First integer?\n");
    scanf("%i", &u);
    printf("Second integer?\n");
    scanf("%i", &v);

    printf("LCM of %i and %i is %i\n", u, v, lcm(u, v));
    return 0;
}
