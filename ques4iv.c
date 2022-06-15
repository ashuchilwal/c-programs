// Write a function to calculate sum of first N natural numbers.(Take something return somthing)

#include<stdio.h>
int sum(int);
int main()
{
    int n, n_sum;
    
    printf("enter the range of natural number : ");
    scanf("%d", &n);

    n_sum = sum(n);
    printf("sum of natural number is %d", n_sum);
}
int sum(int a)
{
    int sum=0, i=1;

    while (i<=a)
    {
        sum=sum+i;
        i++;
    }
    return sum;
}