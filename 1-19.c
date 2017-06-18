#include <stdio.h>

#define MAX_LEN 1000

void reverse(char text[], char reversed[], int len);
int get_line(char line[]);

main()
{
    char line[MAX_LEN];
    char reversed[MAX_LEN];
    int len, i;
    while ((len = get_line(line)) > 0) {
        reverse(line, reversed, len);
        for (i=0; reversed[i] != '\0'; ++i)
            printf("%c", reversed[i]);
        printf("\n");
    }
}

int get_line(char line[])
{
    int c, i;
    for (i = 0; (c = getchar()) != '\n' && c != EOF; ++i) {
        line[i] = c;
    }
    line[i] = '\0';
    return i;
}

void reverse(char word[], char reversed[], int len)
{
    int i;
    for (i = 0; i <= len && word[i] != '\0'; ++i) {
        reversed[len - i - 1] = word[i]; 
    }
    reversed[i] = '\0';
}

