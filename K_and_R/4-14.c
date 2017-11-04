#include <stdio.h>

#define swap(t, x, y) {t temp = y; y = x; x = temp;}

void main()
{
    int one = 1;
    int two = 2;
    swap(int, one, two);
    printf("one: %d\ttwo: %d\n", one, two);
}
