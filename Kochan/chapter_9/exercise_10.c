#include <stdbool.h>
#include <stdio.h>

struct entry
{
    char word[15];
    char definition[50];
};

int compareStrings(const char s1[], const char s2[])
{
    int i = 0, answer;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        ++i;
    if (s1[i] < s2[i])
        answer = -1;
    else if (s1[i] == s2[i])
        answer = 0;
    else
        answer = 1;
    return answer;
}


void dictionarySort(struct entry dict[], const int entries)
{
    struct entry tmp;
    int left_idx;
    int right_idx;
    int isGreater;
    int i;
    for (i = 0; i < entries; ++i) {
        left_idx = 0;
        right_idx = 1;
        while (right_idx <= entries - 1) {
            isGreater = compareStrings(dict[left_idx].word,
                                       dict[right_idx].word);
            if (isGreater == 1) {
                tmp = dict[left_idx];
                dict[left_idx] = dict[right_idx];
                dict[right_idx] = tmp;
            }
            ++right_idx;
            ++left_idx;
        }
    }
}

int main(void)
{
    struct entry dictionary[10] = {
        {"zzz", "sound of sleep"},
        {"aardvark", "a burrowing mammal"},
        {"abyss", "a bottomless pit"},
        {"noon", "the midle of day"},
        {"ahoy", "a nautical call of greeting"}
    };
    void dictionarySort(struct entry dict[], const int entries);
    dictionarySort(dictionary, 5);
    int i;
    for (i = 0; i < 5; ++i)
        printf("%s: %s\n", dictionary[i].word, dictionary[i].definition);
}
