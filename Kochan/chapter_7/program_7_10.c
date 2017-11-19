#include <stdio.h>

int minimum (int values[], int numberOfElements)
{
    int minValue, i;

    minValue = values[0];

    for (i = 1; i < numberOfElements; ++i)
        if (values[i] < minValue)
            minValue = values[i];

    return minValue;
}

int main (void)
{
    int array[9] = {-34, 3, 4, 5, 0, 56, 7, -35, 0};
    printf("The minimum value of the array is %i\n", 
            minimum(array, 9));

    return 0;
}
