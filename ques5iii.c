// Write a function to calculate sum of squares of first N natural numbers.(take nothing return something)

#include<stdio.h>
int sum(void);
int main()
{
    int n_sum;
    n_sum = sum();
    printf("sum of squares of natural numbers is %d", n_sum);
}

int sum(void)
{
    int n, i, sum=0;

    printf("enter the range of natural number : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum = sum+(i*i);
    }
    return sum;
    
}