#include <stdio.h>

float convert (int fahrenheit)
{
    float celsius;

    celsius = (fahrenheit - 32) / 1.8;

    return celsius;
}

int main (void)
{
    int fahr = 27;
    printf ("%i in Fahrenheit is %f in Celsius\n",
            fahr, convert(fahr));

    return 0;
}
