#include <stdio.h>
#include "min.h"

int main(void)
{
    float first, second, min;
    printf("Give me two numbers:\n");
    scanf("%f %f", &first, &second);

    min = MIN(first, second);
    printf("%.4f is smaller of the two", min);

    return 0;
}

