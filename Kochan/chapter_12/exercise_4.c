#include <stdio.h>
#include "max.h"

int main(void)
{
    float first, second, third, max;
    printf("Give me three numbers:\n");
    scanf("%f %f %f", &first, &second, &third);

    max = MAX3(first, second, third);
    printf("%.4f is the biggest of the three\n", max);

    return 0;
}

