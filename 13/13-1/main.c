#include <stdio.h>
#include <stdlib.h>

struct date
{
    int month;
    int day;
    int year;
};

int main ()
{
    struct date today;

    today.month = 3;
    today.day = 21;
    today.year = 2022;

    printf("Today's date is %i/%i/%i\n", today.day, today.month, today.year);
}
