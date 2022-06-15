// Write a recursive function to calculate sum of cubes of first N natural numbers

#include<stdio.h>
int sum_qubes(int n);
int main()
{
    int n;
    printf("Enter the range of natural number : ");
    scanf("%d", &n);

    printf("%d", sum_qubes(n));
}

int sum_qubes(int n)
{
    int sum=0;

    if(n>0)
    {
        sum=n*n*n+(sum_qubes(n-1));
        return sum;
    }
}