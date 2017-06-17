#include <stdio.h>

#define MAX_LEN 1000

void escape(char input[], char output[]);



void escape(char input[], char output[]) 
{

    int i, j, c;
    for (i=0, j=0; (c = input[i]) != '\0'; ++i, ++j) {
        switch (c) {
            case '\t':
                output[j] = '\\';
                ++j;
                output[j] = 't';
                break;
            case '\n':
                output[j] = '\\';
                ++j;
                output[j] = 'n';
                break;
            default:
                output[j] = c;
                break;
        }
    }
}

void main()
{
    char input[MAX_LEN] = "Some word \t one \n more word \n \t wooooooords";
    char output[MAX_LEN];
    escape(input, output);
    printf("%s\n", output);
}
