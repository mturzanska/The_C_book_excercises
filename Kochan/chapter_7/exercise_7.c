#include <stdio.h>

int powerOf(int base, int exponent)
{
    if (exponent == 1)
        return base;
    else
        return base * powerOf(base, exponent - 1);
}

int main(void)
{
    int powerOf(int base, int exponent);
    printf("2^4 = %i\n", powerOf(2, 4));
    return 0;
}
