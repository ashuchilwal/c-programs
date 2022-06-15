#include<stdio.h>

int odd_even(int num)
{
    if(num%2==0)
    {
        printf("%d is even", num);
    }
    else
    {
        printf("%d is odd", num);
    }
    return 0;
}

int main()
{
    int num;
    printf("enter a number :");
    scanf("%d", &num);

    odd_even(num);
    return 0;
}