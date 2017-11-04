#include <stdio.h>
#define MAX_LEN 1000
#define MIN_LEN 20


main()
{
    char line[MAX_LEN];
    int c, i, j;
    i = 0;
    while ((c = getchar()) != EOF) {
        if (c != '\n') {
            line[i] = c;
            ++i;
        }
        else {
            if (i > MIN_LEN) {
                for (j=0; j < i; ++j)
                    printf("%c", line[j]);
               printf("\n");
            }
            i = 0;
        }
    }
}
