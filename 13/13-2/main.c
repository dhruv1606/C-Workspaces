#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

int main ()
{
    struct date myDates[5] = {12, 10, 1975, 12, 30, 1980, 11, 15, 2005};
    printf("Today's date is %i/%i/%i\n", myDates[0].day, myDates[0].month, myDates[0].year);
}
