#include <stdio.h>

void get_next_mulitple (int base, int multiplier)
{
    printf("%i\n", base + multiplier - base % multiplier);
}

int main (void)
{
    float i;
    int j;

    i = 365;
    j = 7;
    get_next_mulitple(i, j);

    i = 12258;
    j = 23;
    get_next_mulitple(i, j);

    i = 996;
    j = 4;
    get_next_mulitple(i, j);

}
