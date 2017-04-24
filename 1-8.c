#include <stdio.h>

main()
{
    int character, new_lines, blanks, tabs;

    new_lines = 0;
    blanks = 0;
    tabs = 0;

    while ((character = getchar()) != EOF) {
        if (character == '\n')
            ++new_lines;
        if (character == ' ')
            ++blanks;
        if (character == '\t')
            ++tabs;
        printf("%d lines, %d blanks, %d tabs\n", new_lines, blanks, tabs);
    }

}



