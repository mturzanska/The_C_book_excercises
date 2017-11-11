#include <stdbool.h>
#include <stdio.h>

int main (void)
{
    float result, input;
    char operator;
    bool kill_it = false;

    result = 0.0;

    while (!kill_it) {

        printf (">>>\n");
        scanf ("%f %c", &input, &operator);

        switch (operator) {

            case '+':
                result += input;
                break;

            case '-':
                result -= input;
                break;

            case '*':
                result *= input;
                break;

            case '/':
                if (input == 0)
                    printf("Division by zero, no can do!\n");
                else
                    result /= input;
                break;

            case 'S':
                result = input;
                break;

            case 'E':
                kill_it = true;
                break;

            default:
                printf("Unknown operator %c\n", operator);
                break;
        }

        printf ("The result is %.2f\n", result);
    }
}
