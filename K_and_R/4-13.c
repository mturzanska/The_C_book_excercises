#include <stdio.h>

int len(char s[])
{
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

void reverse(char s[], int left, int right)
{
    if (right - left <= 0)
        return;
    char tmp = s[left];
    s[left] = s[right];
    s[right] = tmp;
    reverse(s, ++left, --right);
}

void main()
{
    char slowko[20] = "costam";
    int left = 0;
    int right;
    right = len(slowko) - 1;
    reverse(slowko, left, right);
    printf("%s\n", slowko);
}
