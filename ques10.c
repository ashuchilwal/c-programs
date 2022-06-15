#include<stdio.h>
int main()
{
    int year;

    printf("enter the year : ");
    scanf("%d", &year);

    if((year%400 == 0) || (year%4 == 0) && (year%100 != 0))
    {
        printf("Year is leap year : %d", year);
    }
    
    else
    printf("not a leap year");
}