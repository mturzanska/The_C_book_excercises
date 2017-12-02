#include <stdio.h>
#include <string.h>

void intToStr(int an_int, char str[])
{
    void reverseString(char str[]);
    int i = 0;
    int rest;
    while (an_int > 0) {
        rest = an_int % 10;
        an_int /= 10;
        str[i] = rest + '0';
        ++i;
    }
    str[i] = '\0';
    reverseString(str);
}

void reverseString(char str[])
{
    int len = strlen(str);
    int left_idx = 0;
    int right_idx = len - 1;
    char tmp;
    while (left_idx < right_idx) {
        tmp = str[left_idx];
        str[left_idx] = str[right_idx];
        str[right_idx] = tmp;
        ++left_idx;
        --right_idx;
    }
    str[len] = '\0';
}

int main(void)
{
    void intToStr(int an_int, char str[]);
    char result[30];
    intToStr(3454, result);
    printf("%s\n", result);
    return 0;
}
