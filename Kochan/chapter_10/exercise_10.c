#include <stdio.h>

int compareStrings(char *s1, char *s2)
{
    int answer;
    while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
        *s1++;
        *s2++;
    if (*s1 < *s2)
        answer = -1;
    else if (*s1 == *s2)
        answer = 0;
    else
        answer = 1;
    return answer;
}

int main(void)
{
    char s1[10] = "Huba";
    char s2[10] = "Huba";
    char s3[10] = "Buba";
    int is_equal;
    int compareStrings(char *s1, char *s2);

    is_equal = compareStrings(s1, s2);
    printf("%s and %s are equal? %i \n", s1, s2, is_equal);
    is_equal = compareStrings(s1, s3);
    printf("%s and %s are equal? %i \n", s1, s3, is_equal);

    return 0;
}
