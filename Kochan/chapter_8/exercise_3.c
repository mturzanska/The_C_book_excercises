#include <stdio.h>

const int secsInMinute = 60;
const int secsInHour = 3600;
const int secsInDay = 86400;

struct time {
    int hours;
    int minutes;
    int seconds;
};

int timeToSecs(struct time t)
{
    int secs = t.hours *  secsInHour +
               t.minutes * secsInMinute +
               t.seconds;
    printf("%i\n", secs);
    return secs;
}

struct time secsToTime(int secs)
{
    struct time timeFromSecs;
    timeFromSecs.hours = secs / secsInHour;
    secs -= timeFromSecs.hours * secsInHour;
    timeFromSecs.minutes = secs / secsInMinute;
    timeFromSecs.seconds = secs - timeFromSecs.minutes * secsInMinute;
    return timeFromSecs;
}

struct time timeDiff(struct time start, struct time end)
{
    int timeToSecs(struct time t);
    struct time secsToTime(int secs);
    int startInSecs, endInSecs, diffInSecs;
    struct time diff;
    startInSecs = timeToSecs(start);
    endInSecs = timeToSecs(end);
    if (endInSecs < startInSecs) {
        diffInSecs = endInSecs + (secsInDay - startInSecs);
    }
    else {
        diffInSecs = endInSecs - startInSecs;
    }
    diff = secsToTime(diffInSecs);
    return diff;
}

int main(void)
{
    struct time timeDiff(struct time start, struct time end);
    struct time start, end, diff;
    printf("Give me two times in a format HH:MM:SS\n");
    scanf("%i:%i:%i %i:%i:%i",
          &start.hours, &start.minutes, &start.seconds,
          &end.hours, &end.minutes, &end.seconds);

    diff = timeDiff(start, end);
    printf("The difference in time is: %.2i:%.2i:%.2i\n",
            diff.hours, diff.minutes, diff.seconds);
}
