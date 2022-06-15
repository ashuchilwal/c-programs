// Write a program to calculate product of first N natural numbers

#include<stdio.h>
int main()
{
    int i=1, n, product=1;
    printf("enter the value of n : ");
    scanf("%d", &n);

    while(i<=n)
    {
        product=i*product;
        i++;
    }
    printf("product of n natural number is : %d", product);
    return 0;
}