#include <stdio.h>

#define MAX_LINE_LEN 20
#define MAX_INPUT_LEN 1000


char current_line[MAX_LINE_LEN];

int get_line(void);

main()
{
    char input[MAX_INPUT_LEN];
    int i, c, break_idx;
    while ((break_idx = get_line()) > 0) {
        for (i = 0; i < MAX_LINE_LEN && current_line[i] != '\0'; ++i) {
            if (i == break_idx)
                printf("\n");
            else
                printf("%c", current_line[i]);
        }
    }

}

int get_line(void)
{
    extern char current_line[MAX_LINE_LEN];
    int last_blank_idx; 
    int c, i;
    last_blank_idx = 0;
    for (i = 0; i < MAX_LINE_LEN && (c = getchar()) != EOF; ++i) {
        current_line[i] = c;
        if (c == '\n') {
            current_line[i] = '\0';
            return i;
        }
        if (c == '\t' || c == ' ')
            last_blank_idx = i;
        if (i == (MAX_LINE_LEN - 1) || last_blank_idx == 0)
            last_blank_idx = i;
    }
    ++i;
    current_line[i] = '\0';
    return last_blank_idx;
}
