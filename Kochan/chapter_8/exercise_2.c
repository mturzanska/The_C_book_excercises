#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

float getN(struct date d)
{
    float parseYearMonth(struct date d);
    float parseMonth(struct date d);
    float n = 1461 * parseYearMonth(d) / 4 +
        153 * parseMonth(d) / 5 + d.day;
    return n;
}

float parseYearMonth(struct date d)
{
    float result;
    if (d.month <= 2)
        d.year -= 1;
    result = d.year;
    return result;
}

float parseMonth(struct date d)
{
    float result;
    if (d.month <= 2)
        d.month += 13;
    else
        d.month += 1;
    result = d.month;
    return result;
}

int getDayDiff(struct date start, struct date end)
{
    float getN(struct date d);
    float nStart, nEnd;
    int result;

    nStart = getN(start);
    nEnd = getN(end);
    result = (int) nEnd - nStart;
    return result;
}

int main(void)
{
    struct date start, end;
    int getDayDiff(struct date start, struct date end);
    printf("Give me two dates in a format yyyy-mm-dd\n");
    scanf("%i-%i-%i %i-%i-%i", &start.year, &start.month,
          &start.day, &end.year, &end.month, &end.day);

    printf("Date diff between the two is %i",
           getDayDiff(start, end));
    return 0;
}
