#include <stdio.h>

int main (void)
{
    int value1;
    float value2, diff;

    value1 = 23;
    value2 = 45.3;

    printf("The diff between %i and %g is %g\n",
           value1, value2, value1 - value2);

    return 0;
}
