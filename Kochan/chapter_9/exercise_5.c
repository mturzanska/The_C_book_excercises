#include <stdbool.h>
#include <stdio.h>

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
    int findString(char in[], char find[]);
    char string[] = "mimika";
    char substring[] = "mik";
    printf("%i\n", findString(string, substring));

    return 0;
}
