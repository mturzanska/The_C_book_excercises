#include <stdbool.h>
#include <stdio.h>

struct entry
{
    char word[15];
    char definition[50];
};

bool equalStrings(const char s1[], const char s2[])
{
    int i = 0;
    bool areEqual = false;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        ++i;
    if (s1[i] == '\0' && s2[i] == '\0')
        areEqual = true;

    return areEqual;
}

int lookup(const struct entry dictionary[], const char search[],
           const int entries)
{
    int i;
    bool equalStrings(const char s1[], const char s2[]);

    for (i = 0; i < entries; ++i)
        if (equalStrings(search, dictionary[i].word))
            return i;
    return -1;
}

int main(void)
{
    const struct entry dictionary[10] = {
        {"aardvark", "a burrowing mammal"},
        {"abyss", "a bottomless pit"},
        {"ahoy", "a nautical call of greeting"}
    };

    char word[10];
    int entries = 3;
    int entry;
    int lookup(const struct entry dictionary[], const char search[],
               const int entries);
    printf("Enter a word:\n");
    scanf("%14s", word);
    entry = lookup(dictionary, word, entries);

    if (entry != -1)
        printf("%s\n", dictionary[entry].definition);
    else
        printf("Sorry, the word \"%s\" not found", word);
    return 0;
}

