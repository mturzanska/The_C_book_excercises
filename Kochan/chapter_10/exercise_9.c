#include <stdio.h>

void readLine(char *to)
{
    char character;
    do {
        character = getchar();
        *to++ = character;
    } while (character != '\n');

    *to = '\0';
}

int main(void)
{
    void readLine(char *to);
    char string[50];

    readLine(string);
    printf("%s\n", string);

    return 0;
}

