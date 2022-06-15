// Write a function to calculate sum of first N natural numbers.(Take something return nothing)

#include<stdio.h>
void sum(int);
int main()
{
    int n;
    printf("enter the range of natural number : ");
    scanf("%d", &n);

    sum(n);
}
void sum(int a)
{
    int sum=0, i=1;

    while (i<=a)
    {
        sum=sum+i;
        i++;
    }
    printf("sum of natural number is %d", sum);
    
}