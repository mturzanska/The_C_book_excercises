#include <stdio.h>

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

int main(void)
{
    char txt[10] = "what ever";
    removeString(txt, 3, 3);
    printf("%s\n", txt);
}
