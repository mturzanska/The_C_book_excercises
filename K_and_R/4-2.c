#include <ctype.h>
#include <math.h>
#include <stdio.h>

double atof(char s[])
{
    double val, power, magnit;
    int i, sign, e_sign;

    for (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10;
    }
    if (s[i] == 'e') {
        ++i;
        e_sign = (s[i] == '-') ? -1 : 1;
        ++i;
        for (magnit = 0.0; isdigit(s[i]); i++)
            magnit = 10.0 * magnit + (s[i] - '0');
        return (sign * val / power) * pow(10, e_sign * magnit);
    }
    return sign * val / power;
}

void main()
{
    char f_as_str[] = "12.34";
    printf("%f\n", atof(f_as_str));
    char e_as_str[] = "123.45e-6";
    printf("%f\n", atof(e_as_str));
}
