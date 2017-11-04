#include <stdio.h>

#define MAX_LEN 1000

void expand(char input[], char output[]);

void expand(char input[], char output[])
{
    int start = 0;
    int end = 2;
    int output_i = 0; 
    int input_i = 0; 
    int c = input[start];
    int c_end = input[end];

    while (c <= c_end) {
        output[output_i] = c;
        ++output_i;
        ++c;
    output[output_i] = '\0';
    }
}

void main() 
{
    char test_1[MAX_LEN] = "a-z";
    char test_2[MAX_LEN] = "A-Z";
    char test_3[MAX_LEN] = "0-9";
    char test_output[MAX_LEN];
    expand(test_1, test_output);
    printf("%s\n", test_output); 
    expand(test_2, test_output);
    printf("%s\n", test_output);
    expand(test_3, test_output);
    printf("%s\n", test_output);
}
