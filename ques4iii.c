// Write a function to calculate sum of first N natural numbers.(Take nothing return somthing)

#include<stdio.h>
int sum(void);
int main()
{
    int n_sum;
    n_sum = sum();
    printf("sum of natural number is %d", n_sum);
}
int sum()
{
    int n, sum=0, i=1;

    printf("enter the range of natural number : ");
    scanf("%d", &n);

    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    return sum;
}