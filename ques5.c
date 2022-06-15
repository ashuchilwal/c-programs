// Write a recursive function to print first N natural numbers in reverse order

#include<stdio.h>
void n_natural(int n);
int main()
{
    int n;
    printf("enter the range of natural number : ");
    scanf("%d", &n);

    n_natural(n);
}
void n_natural(int n)
{
    if(n>=1)
    {
        printf(" %d", n);
        n_natural(n-1);
    }
}