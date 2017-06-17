#include <stdio.h>
#include <time.h>

#define STACK_SIZE 19

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */

int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high && v[mid] != x) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid + 1;
        else
            low = mid + 1;
    }
    if (v[mid] == x)
        return mid;
    else
        return -1;
}

void main()
{
    clock_t begin = clock();
    double exec_time;
    int haystack[STACK_SIZE] = {
        0, 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 14, 15, 16, 17, 18
    };
    int needle = 14;
    clock_t end = clock();
    exec_time = (long double)(end - begin) / CLOCKS_PER_SEC;
    printf("%d\n", binsearch(needle, haystack, STACK_SIZE));
    printf("%f\n", exec_time);
}
