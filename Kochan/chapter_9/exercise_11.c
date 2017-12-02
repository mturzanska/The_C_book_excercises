#include <stdio.h>

int strToInt(const char string[])
{
    int i = 0, intValue, sign = 1, result = 0;

    if (string[0] == '-')
        sign = -1;
        i = 1;


    for (; string[i] >= '0' && string[i] <= '9'; ++i) {
        intValue = string[i] - '0';
        result = result * 10 + intValue;
    }
    result *= sign;

    return result;
}

int main(void)
{
    int strToInt(const char string[]);

    printf("%i\n", strToInt("245"));
    printf("%i\n", strToInt("100") + 25);
    printf("%i\n", strToInt("-154"));

    return 0;
}
