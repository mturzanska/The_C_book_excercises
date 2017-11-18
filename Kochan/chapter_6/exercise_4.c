#include <stdio.h>

int main (void)
{
    int count = 0;
    float sum = 0.0;
    float number;

    printf("Give me your ten numbers\n");

    do {
        ++count;
        scanf("%f", &number);
        sum += number;
    }
    while (count < 10);

    printf("The average is %.2f\n", number/10);
    return 0;
}
