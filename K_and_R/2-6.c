#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

unsigned setbits(unsigned x, int p, int n, unsigned y) {
    unsigned temp_x, temp_y;
    temp_x = x & (~0 << p | ~(~0 << n)); 
    temp_y = (y & ~(~0 << n)) << (p - n);
    return temp_x | temp_y;
}

void main() {
    unsigned x = 34, y = 222;
    int p = 4, n = 2;
    printf("%d\n", setbits(x, p, n, y));

}
