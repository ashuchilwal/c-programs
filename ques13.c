// Write a program to calculate sum of first N natural numbers

#include<stdio.h>
int main()
{
    int i=1, n, sum=0;
    printf("enter the value of n : ");
    scanf("%d", &n);

    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("sum is : %d", sum);
    return 0;
}