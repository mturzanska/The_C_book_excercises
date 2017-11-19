#include <stdio.h>

float absoluteValue (float x)
{
    if (x < 0)
        x = -x;

    return x;
}

int main (void)
{
    float f1 = -15.5;
    float result;

    result = absoluteValue(f1);
    printf ("%.2f\n", result);
    printf ("%.2f\n", f1);
    
    return 0;
}
