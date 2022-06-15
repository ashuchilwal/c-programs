// Write a program to calculate sum of the digits of a given number

#include<stdio.h>
int main()
{
    int number, num, sum=0, remainder;
    printf("enter a number : ");
    scanf("%d", &number);

    num=number;
    while(num>0)
    {
        remainder=num%10;
        sum+=remainder;
        num/=10;
    }
    printf("number is %d and sum of digits is %d", number, sum);
    return 0;
}