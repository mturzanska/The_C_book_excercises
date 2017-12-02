#include <stdio.h>
#include <string.h>

void insertString(char text[], char insert[], int position)
{
    int j = 0;
    int i = position;
    int insert_len = strlen(insert);
    int text_len = strlen(text);
    char tmp[insert_len + 1];
    while (insert[j] != '\0' || text[i] != '\0') {
        tmp[j] = text[i];
        text[i] = insert[j];
        ++i;
        ++j;
    }
    while (text[i] != '\0')
        tmp[j] = text[i];
        ++i;
        ++j;
    tmp[j] = '\0';

    text_len = strlen(text);
    i = 0;
    j = text_len;

    while (tmp[i] != '\0') {
        text[j] = tmp[i];
        ++i;
        ++j;
    }

    text[j] = '\0';
}

int main(void)
{
    char insert[4] = "one";
    char into[30] = "But no  was found";
    void insertString(char text[], char insert[], int position);

    insertString(into, insert, 7);
    printf("%s\n", into);

    return 0;
}
