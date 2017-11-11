#include <math.h>
#include <stdbool.h>
#include <stdio.h>


int get_num_of_digits (int a_number)
{
    int divisor = 10;
    int num_of_digits = 1;
    while (true) {
        if (a_number < divisor)
            break;
        divisor *= 10;
        num_of_digits += 1;
    }
    return num_of_digits;
}


int reverse (int a_number, int num_of_digits)
{
    int reversed = 0;
    do {
        int right_digit = a_number % 10;
        reversed += (pow(10, num_of_digits - 1) * right_digit);
        num_of_digits -= 1;
        a_number /= 10;
    } while (a_number != 0);
    return reversed;
}

int main (void)
{
    int to_print;

    printf ("Give me an integer, so that I, humble machine can print it\n");
    scanf ("%i", &to_print);
    int num_of_digits = get_num_of_digits(to_print);
    int right_digit;
    to_print = reverse(to_print, num_of_digits);

    do {
        right_digit = to_print % 10;
        switch (right_digit) {
            case 0:
                printf("zero");
                break;
            case 1:
                printf("one");
                break;
            case 2:
                printf("two");
                break;
            case 3:
                printf("three");
                break;
            case 4:
                printf("four");
                break;
            case 5:
                printf("five");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("seven");
                break;
            case 8:
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;
        }
        to_print /= 10;
        printf(" ");
    } while (to_print != 0);

    printf("\n");
    return 0;
}
