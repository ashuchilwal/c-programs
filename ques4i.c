// Write a function to calculate sum of first N natural numbers.(Take nothing return nothing)

#include<stdio.h>
void sum(void);
int main()
{
    sum();
}
void sum(void)
{
    int n, sum=0, i=1;

    printf("enter a range of natural number :");
    scanf("%d", &n);

    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("sum of natural number %d", sum);
    
}