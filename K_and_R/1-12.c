#include <stdio.h>

#define BLANK ' '
#define NEWLINE '\n'
#define TAB '\t'

main()
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == BLANK || c == NEWLINE || c == TAB) {
            c = NEWLINE;
            printf("%c", c);
        }
        else
            printf("%c", c); 
    }
}
