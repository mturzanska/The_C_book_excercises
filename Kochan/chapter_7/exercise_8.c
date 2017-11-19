#include <math.h>
#include <stdio.h>

float a, b, c;
float roots[2];

int powerOf(int base, int exponent)
{
    if (exponent == 1)
        return base;
    else
        return base * powerOf(base, exponent - 1);
}

void getParams(void)
{
    printf("a ?\n");
    scanf("%f", &a);
    printf("b ?\n");
    scanf("%f", &b);
    printf("c ?\n");
    scanf("%f", &c);
}


float getDicsriminant(void)
{
    int powerOf(int base, int exponent);
    return powerOf(b, 2) - 4 * a * c;
}

void getRoots(void)
{
    float discriminant;
    float getDicsriminant(void);

    discriminant = getDicsriminant();
    if (discriminant < 0) {
        printf("Roots are all imaginary\n");
        return;
    }
    roots[0] = (-b + sqrt(discriminant)) / (2 * a);
    roots[1] = (-b - sqrt(discriminant)) / (2 * a);
    return;

}

int main(void)
{
    void getParams(void);
    void getRoots(void);

    getParams();
    getRoots();
    printf("1st root %.2f\n", roots[0]);
    printf("2nd root %.2f\n", roots[1]);
}

