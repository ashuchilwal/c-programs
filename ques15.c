// Write a program to calculate factorial of a number

#include<stdio.h>
int main()
{
    int i=1, num, factorial=1;

    printf("enter the number which you want factorial : ");
    scanf("%d", &num);

    while(i<=num)
    {
        factorial*=i;
        i++;
    }
    printf("factorial of %d is %d ", num, factorial);
    return 0;
}