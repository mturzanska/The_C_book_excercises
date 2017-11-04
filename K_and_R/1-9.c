#include <stdio.h>

main()
{
    int character, blanks_count; 
    blanks_count = 0;

    while ((character = getchar()) != EOF) {
        if (character != ' ') {
            blanks_count = 0;
            putchar(character);
        }
        if (character == ' ') {
            ++blanks_count;
            if (blanks_count == 1)
                putchar(character);
        }
    }
}
