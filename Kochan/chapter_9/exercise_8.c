#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void replaceString(char source[], char s1[], char s2[])
{
    void removeString(char string[], int start, int count);
    void insertString(char text[], char insert[], int position);
    int findString(char in[], char find[]);

    int position = findString(source, s1);
    int len_remove = strlen(s1);

    removeString(source, position, len_remove);
    insertString(source, s2, position);
}

void removeString(char string[], int start, int count)
{
    int i;
    for (i = 0; string[i] != '\0'; ++i)
    {
        if (i >= start)
            string[i] = string[i + count];
    }
    string[i + 1] = '\0';
}

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

int findString(char in[], char find[])
{
    int i, j, found_at;
    bool found = false;
    for (i = 0, j = 0; in[i] != '\0' && find[j] != '\0'; ++i)
    {
        if (found == false)
        {
            j = 0;

            if (find[j] == in[i])
            {
                found = true;
                found_at = i;
                ++j;
            }
        }
        else
        {
            if (find[j] != in[i])
            {
                found = false;
                found_at = -1;
                --i;
            }
            else
            {
                ++j;
            }

        }
    }
    if (find[j] == '\0')
        return found_at;
    else
        return -1;
}

int main(void)
{
    void replaceString(char source[], char s1[], char s2[]);
    void removeString(char string[], int start, int count);
    void insertString(char text[], char insert[], int position);
    int findString(char in[], char find[]);

    char text[] = "But no 1 was found";
    replaceString(text, "1", "one");

    printf("%s\n", text);
    return 0;
}
