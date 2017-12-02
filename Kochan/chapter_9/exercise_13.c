#include <stdio.h>

void lowercase(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
    }
}

int main(void)
{
    char test_str[] = "gRzegZoLKA";
    void lowercase(char str[]);
    lowercase(test_str);
    printf("%s\n", test_str);
    return 0;
}
