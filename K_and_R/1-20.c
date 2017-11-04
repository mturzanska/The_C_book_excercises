#include <stdio.h>

#define BLANKS_PER_TAB 4
#define MAX_INPUT_LEN 1000

main()
{
    char input[MAX_INPUT_LEN];
    int c, idx, for_i;
    idx = 0;
    while ((c = getchar()) != EOF) {
        if (c != '\t') {
            input[idx] = c;
            ++idx;
        }
        else {
            for (for_i = 0; for_i < BLANKS_PER_TAB; ++for_i) {         
                input[idx] = ' ';
                ++idx;
            }
        }
    }
    printf("%s\n", input);
}
