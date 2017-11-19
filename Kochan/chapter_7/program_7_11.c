#include <stdio.h>

void multiplyBy2(float array[], int n)
{
    int i;

    for (i = 0; i < n; ++i)
        array[i] *= 2;

    return;

}

int main(void)
{
    float floatVals[4] = {1.2f, -3.7f, 6.2f, 4.0f};
    int i;
    void mutiplyBy2(float array[], int n);

    multiplyBy2(floatVals, 4);

    for (i = 0; i < 4; ++i)
        printf("%.2f\n", floatVals[i]);

    return 0;
}
