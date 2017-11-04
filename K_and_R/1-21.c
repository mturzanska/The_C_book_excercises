#include <stdio.h>

#define BLANKS_PER_TAB 4
#define MAX_INPUT_LEN 1000

main()
{
    char input[MAX_INPUT_LEN];
    int c, idx, for_tab, for_blank;
    int blank_count, tabs, blanks;
    idx = 0;
    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            if (blank_count > 0) {
                tabs = blank_count / BLANKS_PER_TAB; 
                blanks = blank_count - tabs * BLANKS_PER_TAB;
                if (tabs > 0) {
                    for (for_tab = 1; for_tab <= tabs; ++for_tab) {
                         input[idx] = '\t';
                         ++idx;
                    }
                }
                if (blanks > 0) {
                    for (for_blank = 1; for_blank <= blanks; ++for_blank) {
                        input[idx] = ' ';
                        ++idx;
                    }
                }
            }
            input[idx] = c;
            ++idx;
            blank_count = 0;
        }
        else
            ++blank_count;;
    }
    printf("%s\n", input);
}
