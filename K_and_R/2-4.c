#include <stdio.h>

void squeeze(char s[], char c[]);

void squeeze(char s[], char c[]) {
    int i, j, k;
    int has = 0;
    for (i = j = 0; s[i] != '\0'; ++i) {
        has = 0;
        for (k = 0; c[k] != '\0'; ++k) {
            if (s[i] == c[k]) {
                has = 1;
            }
        }
        if (has == 0)
            s[j++] = s[i];
    }
    s[j] = '\0';
}

main()
{
    char name[] = "Maltur";
    char bad_chars[] = "au";
    squeeze(name, bad_chars);
    printf("%s\n", name);
}
