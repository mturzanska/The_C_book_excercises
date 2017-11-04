#include <stdio.h>

main()
{
    int in_comment, previous;
    char c;

    in_comment = 0;
    previous = 0;
    while ((c = getchar()) != EOF) {
        if (in_comment == 0) {
            if (c == '/')
                previous = 1;
            else if (previous == 1) {
                if (c == '*') {
                    in_comment = 1;
                    previous = 0;
                }
                else {
                    printf("%c%c", previous, c);
                    previous = 0;
                }
            }
            else
                printf("%c", c);
        }
        if (in_comment == 1) {
            if (c == '*')
                previous = 1;
            else if (previous == 1) {
                if (c == '/') {
                    in_comment = 0;
                    previous = 0;
                }
                else {
                    printf("%c%c", previous, c);
                    previous = 0;
                }
            }
        }
    }
}
