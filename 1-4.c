#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsius = -20, -15, ..., 150; */ 

main()
{
    float fahr, celsius;
    float lower, upper, step;
    char fahr_header, celsius_header;;

    lower = -20;
    upper = 150;
    step = 20;

    fahr_header = 'F';
    celsius_header = 'C';

    celsius = lower;
    printf("%3c %6c\n", celsius_header, fahr_header);
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }
}
