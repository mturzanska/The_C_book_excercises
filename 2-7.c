#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

unsigned invert(unsigned x, int p, int n) {
    unsigned inv_x, map;
    inv_x = (~x & ~(~0 << 8)); 
    map =  inv_x & (~(~0 << p | ~(~0 << n))); 
    printf("%u\n", inv_x);
    printf("%u\n", map);
    return x | map; 
}

void main() {
    unsigned x = 34;
    int p = 4, n = 2;
    printf("%u\n", invert(x, p, n));
}
