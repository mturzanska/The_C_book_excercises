#include <stdio.h>

int any(char s[], char c[]);

int any(char s[], char c[]) {
    int i, k;
    for (i = 0; s[i] != '\0'; ++i) {
        for (k = 0; (c[k] != '\0'); ++k) {
            if (s[i] == c[k])
                return i;
        }
    }
   return -1;
}

main()
{
    char name[] = "Maltur";
    char bad_chars[] = "au";
    printf("%d\n", any(name, bad_chars));
}
