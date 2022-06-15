// Write a recursive function to calculate sum of digits of a number 

#include<stdio.h>
int sum_digit(int n);
int main()
{
    int n;
    printf("Enter a number which sum of digit you want : ");
    scanf("%d", &n);

    printf("%d", sum_digit(n));
}

int sum_digit(int n)
{
    int num = n, r, sum=0;
    if(num>0)
    {
        r=num%10;
        sum = r+(sum_digit(num/10));
        return sum;
    }
}