#include <stdio.h>
#include "case.h"

int main(void)
{
    char character;
    printf("Give me a character\n");
    scanf("%c", &character);
    printf("Is %c alphabetic ?\n%i\n", character, IS_ALPHABETIC(character));

    return 0;
}

