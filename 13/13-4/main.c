#include <stdio.h>
#include <stdlib.h>

struct date
{
    int month;
    int day;
    int year;
};

struct funds
{
    char bank[100];
    double bankfund;
    char save[100];
    double savefund;
};

double sum (struct funds moolah)
{
    return (moolah.bankfund + moolah.savefund);
}

int main()
{
    struct date today, *datePtr;
    datePtr = &today;
    datePtr->month = 9;
    datePtr->day = 25;
    datePtr->year = 2015;

    printf("Today's date is %i/%i/%.2i.\n", datePtr->day, (*datePtr).month, datePtr->year);

    struct funds stan = {"Garlic-Melon Bank", 4032.27, "Lucky's Savings and Loan", 8543.94};

    printf("Stan has a total of $%.2f.\n", sum(stan));

    return 0;
}
