// Write a recursive function to calculate sum of squares of digits of a number

#include<stdio.h>
int sum_square_digit(int n);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    printf("%d", sum_square_digit(n));
}

int sum_square_digit(int n)
{
    if(n>0)
    {
        return((n%10)*(n%10) + sum_square_digit(n/10));
    }
}