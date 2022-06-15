// Write a function to calculate sum of squares of first N natural numbers.(take something return something)

#include<stdio.h>
int sum(int);
int main()
{
    int n, n_sum;
    printf("enter the range of natural number : ");
    scanf("%d", &n);
    n_sum = sum(n);
    printf("sum of squares of %d natural numbers is %d", n, n_sum);
}

int sum(int a)
{
    int i, sum=0;

    for(i=1; i<=a; i++)
    {
        sum = sum+(i*i);
    }
    return sum;
    
}