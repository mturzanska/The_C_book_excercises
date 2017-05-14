#include <stdio.h>

int htoi(char s[]);

int htoi(char s[]) {
    int i, n, value;
    int a = 10;
    int A = 10;
    n = 0;
    for (i = 0; s[i] != '\0'; ++i) {
        if (s[i] >= 'a' && s[i] <= 'f') {
            value = s[i] - 'a' + a;
        }
        if (s[i] >= 'A' && s[i] <= 'F') {
            value = s[i] - 'A' + A;
        }
        if (s[i] >= '0' && s[i] <= '9') {
            value = s[i] - '0';
        }
        if ((i == 0 && s[i] == '0') || (i == 1 && (s[i] == 'x' || s[i] == 'X')))
            value = 0;
        n = 16 * n + value;
    }
    return n;
}

main()
{
    char test_hex_1[] = "4A";
    char test_hex_2[] = "0x4A";
    char test_hex_3[] = "0X4A";
    char test_hex_4[] = "FFFF";

    printf("%d\n", htoi(test_hex_1));
    printf("%d\n", htoi(test_hex_2));
    printf("%d\n", htoi(test_hex_3));
    printf("%d\n", htoi(test_hex_4));
}

