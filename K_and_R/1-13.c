#include <stdio.h>

#define HIST_BLOCK "[]"

main()
{
    int c, i, j, length, words_count;
    int lengths[15];

    for (i = 0; i < 15; ++i)
        lengths[i] = 0;

    length = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            if (length > 0)
                ++lengths[length];
            length = 0;
        }
        else
            ++length;
    }
    for (i = 0; i < 15; ++i) {
        words_count = lengths[i];
        printf("%d  ", i); 
        for (j = 0; j < words_count; ++j)
            printf("%s", HIST_BLOCK);
        printf("%c", '\n');
    }
}
