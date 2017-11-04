#include <stdio.h>

unsigned rightrot(unsigned x, int n);

unsigned rightrot(unsigned x, int n) {
    unsigned x_begin, x_end;
    x_begin = x >> n;
    x_end = (x & (~(~0 << n))) << 8 - n;
    return x_begin | x_end;

}

void main() {
    unsigned x = 34;
    int n = 2;
    printf("%d\n", rightrot(x, n));
}
