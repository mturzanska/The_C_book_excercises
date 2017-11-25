#include <stdbool.h>
#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

struct time {
    int hour;
    int minutes;
    int seconds;
};

struct dateTime {
    struct date sdate;
    struct time stime;
};

struct time timeUpdate(struct time now)
{
    ++now.seconds;
    if (now.seconds == 60) {
        now.seconds = 0;
        ++now.minutes;
    }
    if (now.minutes == 60) {
        now.minutes = 0;
        ++now.hour;
    }
    if (now.hour == 24)
        now.hour = 0;

    return now;
}

struct date dateUpdate(struct date today)
{
    struct date tomorrow;
    int numberOfDays(struct date d);

    if (today.day != numberOfDays(today)) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if (today.month == 12) {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;

    }
    else {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    return tomorrow;
}

int numberOfDays(struct date d)
{
    int days;
    bool isLeapYear (struct date d);
    const int daysPerMonth[12] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    if (isLeapYear(d) && d.month == 2)
        days = 29;
    else
        days = daysPerMonth[d.month - 1];

    return days;
}

bool isLeapYear(struct date d)
{
    bool leapYearFlag;
    if ((d.year % 4 == 0 && d.year % 100 != 0) ||
        d.year % 400 == 0)
        leapYearFlag = true;
    else
        leapYearFlag = false;

    return leapYearFlag;
}

struct dateTime clockKeeper(struct dateTime dt)
{
    struct time timeUpdate(struct time now);
    struct date dateUpdate(struct date today);
    dt.stime = timeUpdate(dt.stime);
    if (dt.stime.hour == 0 && dt.stime.minutes == 0
        && dt.stime.seconds == 0)
    dt.sdate = dateUpdate(dt.sdate);
    return dt;
}

int main(void)
{
    struct date a_date;
    struct time a_time;
    struct dateTime a_datetime;
    struct dateTime clockKeeper(struct dateTime dt);

    printf("Give me a datetime and I'll add a second to it\n");
    scanf("%i-%i-%i %i:%i:%i",
          &a_date.year, &a_date.month, &a_date.day,
          &a_time.hour, &a_time.minutes, &a_time.seconds);
    a_datetime.sdate = a_date;
    a_datetime.stime = a_time;
    a_datetime = clockKeeper(a_datetime);
    printf("%.4i-%.2i-%.2i %.2i:%.2i:%.2i\n",
            a_datetime.sdate.year, a_datetime.sdate.month,
            a_datetime.sdate.day, a_datetime.stime.hour,
            a_datetime.stime.minutes, a_datetime.stime.seconds);
    return 0;
}
