#include <stdio.h>
#include "case.h"

int main(void)
{
    char character;
    printf("Give me a character\n");
    scanf("%c", &character);
    printf("Is %c digit?\n%i\n", character, IS_DIGIT(character));

    printf("Is %c special?\n%i\n", character, IS_SPECIAL(character));

    return 0;
}

