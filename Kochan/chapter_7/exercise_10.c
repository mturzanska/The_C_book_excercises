#include <stdio.h>

int isPrime(int n)
{
    int i;
    for (i = n - 1; i > 1; --i) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int getAnInt(void)
{
    int n;
    printf("Give me an int\n");
    scanf("%i", &n);
    return n;
}

int main(void)
{
    int isPrime(int n);
    int getAnInt(void);

    int n, isIt;

    n = getAnInt();
    isIt = isPrime(n);
    printf("isPrime = %i\n", isIt);

    return 0;
}
