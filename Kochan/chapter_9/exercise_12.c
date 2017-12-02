#include <math.h>
#include <stdio.h>

float strToFloat(char string[])
{
    int intValue, decimalValue;
    int decimalPlaces = 0;
    int i = 0, sign = 1;
    float result = 0.0, decimalResult = 0;

    if (string[0] == '-') {
        sign = -1;
        i = 1;
    }

    for (; string[i] >= '0' && string[i] <= '9'; ++i) {
        intValue = string[i] - '0';
        result = result * 10 + intValue;
    }
    printf("%f\n", result);

    if (string[i] == '.') {
        ++i;
        for (; string[i] >= '0' && string[i] <= '9'; ++i) {
            decimalValue = string[i] - '0';
            decimalResult = decimalResult * 10 + decimalValue;
            decimalPlaces += 1;
        }
    }
    result += (decimalResult / pow(10, decimalPlaces));
    result += sign;
    return result;
}

int main(void)
{
    float strToFloat(char string[]);
    printf("%.2f\n", strToFloat("245.23"));
    printf("%.3f\n", strToFloat("-154.645"));

    return 0;
}
