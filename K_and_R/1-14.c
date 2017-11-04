#include <stdio.h>

#define HIST_BLOCK "[]"

main()
{
    int c, i, j, count, c_idx;
    int counts[26];

    for (i = 0; i < 26; ++i) {
        counts[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c != '\n' || c != '\t' || c != ' ') {
            c_idx = c - 'a';
            ++counts[c_idx];
        }
    }
    for (i = 0; i < 26; ++i) {
       count = counts[i];
       printf("%c", i + 'a');
       for (j=0; j < count; ++j)
           printf("%s", HIST_BLOCK);
       printf("%c", '\n');
    }
}
        
