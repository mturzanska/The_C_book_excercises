#include <stdio.h>

void sort(int a[], int n) 
{
    int i, j, temp;

    for (i = 0; i < n - 1; ++i)
        for (j = i + 1; j < n; ++j)
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

int main(void)
{
    int i;
    int array[10] = {34, -3, 0, 43, 2, 90, 15, 15, 54, 2};

    void sort(int a[], int n);

    printf("The array before the sort:\n");

    for (i = 0; i < 10; ++i)
        printf("%i ", array[i]);
    printf("\n");

    sort(array, 10);

    printf("The array after the sort:\n");

    for (i = 0; i < 10; ++i)
        printf("%i ", array[i]);
    printf("\n");

    return 0;

}
