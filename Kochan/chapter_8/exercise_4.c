#include <stdio.h>

struct weekday {
    char name[10];
};

struct date {
    int year;
    int month;
    int day;
};

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

float getN(struct date d)
{
    float parseYearMonth(struct date d);
    float parseMonth(struct date d);
    float n = 1461 * parseYearMonth(d) / 4 +
        153 * parseMonth(d) / 5 + d.day;
    return n;
}

void printWeekday(struct date d)
{
    struct weekday sunday = {"Sunday"};
    struct weekday monday = {"Monday"};
    struct weekday tuesday = {"Tuesday"};
    struct weekday wednesday = {"Wednesday"};
    struct weekday thursday = {"Thursday"};
    struct weekday friday = {"Friday"};
    struct weekday saturday = {"Saturday"};

    struct weekday weekdays[7] = {
        sunday, monday, tuesday, wednesday,
        thursday, friday, saturday
    };

    float getN(struct date d);
    int idx, n;
    n = getN(d);
    idx = (n - 621049) % 7;
    printf("%s", weekdays[idx].name);
}

int main(void)
{
    struct date a_date;
    void printWeekday(struct date d);
    printf("Give me a date (yyyy-mm-dd) and I'll give you a weekday\n");
    scanf("%i-%i-%i", &a_date.year, &a_date.month, &a_date.day);
    printWeekday(a_date);
    return 0;
}
