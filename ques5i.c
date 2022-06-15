// Write a function to calculate sum of squares of first N natural numbers.(take nothing return nothing)

#include<stdio.h>
void sum(void);
int main()
{
    sum();
}

void sum(void)
{
    int n, i, sum=0;

    printf("enter the range of natural number : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum = sum+(i*i);
    }
    printf("sum of squares of %d natural numbers is %d", n, sum);
}