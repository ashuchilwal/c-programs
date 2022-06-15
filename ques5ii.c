// Write a function to calculate sum of squares of first N natural numbers.(take something return nothing)

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
    int i, sum=0;

    for(i=1; i<=a; i++)
    {
        sum = sum+(i*i);
    }
    printf("sum of squares of first %d natural numbers is %d", a, sum);
}