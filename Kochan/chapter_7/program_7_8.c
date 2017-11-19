#include <stdio.h>

float absoluteValue(float x)
{
    if (x < 0)
        x = -x;

    return x;
}

float squareRoot(float x)
{
    const float epsilon = .00001;
    float guess = 1.0;

    while (absoluteValue(guess * guess - x) >= epsilon)
        guess = (x / guess + guess) / 2.0;

    return guess;
}

int main (void)
{
    printf("square root of 144 is %.2f\n", squareRoot(144));
    return 0;
}
