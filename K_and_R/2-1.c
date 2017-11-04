#include <limits.h>
#include <math.h>
#include <stdio.h>

void get_u_max(long byte_count);
void get_max(long byte_count);
void get_min(long byte_count);


void get_u_max(long byte_count)
{
    long u_max;
    u_max = pow(2, 8 * byte_count) - 1;
    printf("%ld\n", u_max);
}

void get_min(long byte_count)
{
    long min;
    min = -1 * pow(2, 8 * byte_count) / 2;
    printf("%ld\n", min);
}

void get_max(long byte_count)
{
    long max;
    max = pow(2, 8 * byte_count) / 2 - 1;
    printf("%ld\n", max);
}


main()
{
    int i, j, k;

    long extremes[4][3] = {
        {SCHAR_MAX, SCHAR_MIN, UCHAR_MAX}, 
        {INT_MAX, INT_MIN, UINT_MAX}, 
        {LONG_MAX, LONG_MIN, ULONG_MAX}, 
        {SHRT_MAX, SHRT_MIN, USHRT_MAX}, 
    };
    char names [4][5] = {
        {'c', 'h', 'a', 'r', '\0'},
        {'i', 'n', 't', ' ', '\0'},
        {'l', 'o', 'n' ,'g', '\0'},
        {'s', 'h', 'r' ,'t', '\0'},
    };

    char printfs [4][3][6] = {
        {
            {'%', 'd', '\n', '\0'},
            {'%', 'd', '\n', '\0'},
            {'%', 'd', '\n', '\0'},
        },
        {
            {'%', 'u', '\n', '\0'},
            {'%', 'd', '\n', '\0'},
            {'%', 'd', '\n', '\0'},
        },
        {
            {'%', 'l', 'u', '\n', '\0'},
            {'%', 'l', 'd', '\n', '\0'},
            {'%', 'l', 'd', '\n', '\0'},
        },
        {
            {'%', 'd', '\n', '\0'},
            {'%', 'd', '\n', '\0'},
            {'%', 'd', '\n', '\0'},
        },
    };

    for (i = 0; i < 4; i++) {
        printf("%s\n", names[i]);
        for (j = 0; j < 3; j++)
            printf(printfs[j, i], extremes[i][j]);
    }

    long char_bytes;
    char_bytes = sizeof(char);
    printf("%s\n", "computed char");
    get_max(char_bytes);
    get_min(char_bytes);
    get_u_max(char_bytes);

    long int_bytes;
    int_bytes = sizeof(int);
    printf("%s\n", "computed int");
    get_max(int_bytes);
    get_min(int_bytes);
    get_u_max(int_bytes);
    /* etc */
}
