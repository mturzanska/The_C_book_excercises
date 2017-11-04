#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */ 

main()
{
    float fahr, celsius;
    float lower, upper, step;
    char fahr_header, celsius_header;


    lower = 0;      /* lower limit of temperature scalre */ 
    upper = 300;    /* upper limit */ 
    step = 20;      /* step size */

    fahr_header = 'F';
    celsius_header = 'C'; 

    fahr = lower;
    printf("%3c %6c\n", fahr_header, celsius_header);
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    } 
}
