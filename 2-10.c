#include <stdio.h>

/* lower: convert c to lower case; ASCII only */

int lower(int c)
{
    return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
}

void main()
{
    int i; 
    char word[] = "WoWoW";
    for (i = 0; word[i] != '\0'; i++)
        printf("%c\n", lower(word[i]));
} 
