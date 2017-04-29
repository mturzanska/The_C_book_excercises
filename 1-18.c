#include <stdio.h>
#define MAX_LEN 500

main()
{
    int c, idx;
    char prev;
    char line[MAX_LEN];
    idx = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            if (idx > 0) {
                prev = line[idx - 1]; 
                if (prev != '\t' || prev != ' ' || prev != '\n') 
                    line[idx - 1] = c;
            }
            else {
                line[idx] = c;
                ++idx;
            }
        }
        else {
            line[idx] = c;
            ++idx;
        }
    }
    printf("%s\n", line);
}
