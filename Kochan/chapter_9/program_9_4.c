#include <stdbool.h>
#include <stdio.h>

bool equalString(const char s1[], const char s2[])
{
    int i = 0;
    bool areEqual;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        ++i;

    if (s1[i] == '\0' && s2[i] == '\0')
        areEqual = true;
    else
        areEqual = false;

    return areEqual;
}

int main(void)
{
    bool equalString(const char s1[], const char s2[]);
    const char stra[] = "string";
    const char strb[] = "string";
    const char strc[] = "string test";

    printf("%i\n", equalString(stra, strb));
    printf("%i\n", equalString(stra, strc));
    printf("%i\n", equalString(strc, strb));

    return 0;
}
