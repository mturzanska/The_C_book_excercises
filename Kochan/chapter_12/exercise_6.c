#include <stdio.h>
#include "case.h"

int main(void)
{
    char character;
    printf("Give me a character\n");
    scanf("%c", &character);
    printf("Is %c upper case?\n%i\n", character, IS_UPPER_CASE(character));

    return 0;
}

