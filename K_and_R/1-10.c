#include <stdio.h>


main()
{
    int character;

    while ((character = getchar()) != EOF) {
        if (character == '\\') {
            putchar('\\');
            putchar('\\');
        }
        if (character == '\b') {
            putchar('\\');
            putchar('b');
        }
        if (character == '\t') {
            putchar('\\');
            putchar('t');
        } 
        if (character != '\\')
            if (character != '\b')
                if (character != '\t')
                    putchar(character);
    }
}
