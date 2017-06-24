#include <stdio.h>

#define MAX_LEN 30

int strindex(char s[], char t) {
    int idx = -1;
    int i;
    for (i = 0; s[i] != '\0'; ++i) {
        if (s[i] == t)
            idx = i;
    }
    return idx;
}

void main() {
    char needle;
    char haystack[MAX_LEN] = "baranina";
    needle = 'n';
    printf("%d\n", strindex(haystack, needle));
}
