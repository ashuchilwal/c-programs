// Write a program to reverse a number

#include<stdio.h>
int main()
{
    int number, num, reverse=0, remainder;
    printf("enter a number : ");
    scanf("%d", &number);

    num=number;
    while(num>0)
    {
        remainder=num%10;
        reverse=reverse*10+remainder;
        num/=10;
    }
    printf("number is %d and reverse is %d", number, reverse);
    return 0;
}