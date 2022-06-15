// Write a program to calculate sum of first N even natural numbers

#include<stdio.h>
int main()
{
    int i=1, n, sum=0;
    printf("enter the value of n : ");
    scanf("%d", &n);

    while(i<=n)
    {
        sum+=(2*i);
        i++;
    }
    printf("sum of first %d even natural number is : %d ", n, sum);
    return 0;
}