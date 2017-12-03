#include <stdio.h>

int stringLength(const char *string)
{
    const char *cptr = string;

    while (*cptr)
        ++cptr;
    return cptr - string;
}

int main (void)
{
    int stringLength(const char *string);
    printf("%i\n", stringLength("ekjrfdsfs"));
    return 0;
}
