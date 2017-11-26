#include <stdio.h>

void substring(char source[], int start, int count, char result[])
{
    int i, c;
    for (i = start, c = 0; source[i] != '\0' && count >= c; ++i, ++c)
        result[c] = source[i];
    result[c] = '\0';
}

int main(void)
{
    void substring(char source[], int start, int count, char result[]);
    char test_string[7] = "blabla";
    char test_result[7];
    substring(test_string, 3, 2, test_result);
    printf("%s\n", test_result);

    substring(test_string, 3, 10, test_result);
    printf("%s\n", test_result);

    return 0;
}
