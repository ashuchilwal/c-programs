// Write a program to count digits in a given number.

#include<stdio.h>
int main()
{
    int i, number, count=0, num;
    printf("enter the digit : ");
    scanf("%d", &number);

    num=number;
    while (num>0)
    {
        num/=10;
        count++;
    }
    printf("total digit in %d = %d", number, count);
    return 0;
}