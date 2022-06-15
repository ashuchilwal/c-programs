#include<stdio.h>
int fact(int num)
{
    int i, fact=1;

    for(i=1; i<=num; i++)
    {
        fact = fact*i;
    }
    return fact;
}

int fibo(int num)
{
    int i, n1 = 0, n2 = 1, n3;

    printf("%d %d", n1, n2);

    for(i=2; i<num; ++i)
    {
        n3 = n1+n2;
        printf(" %d", n3);

        n1 = n2;
        n2 = n3;
    }
}

int odd_even(int num)
{
    if(num%2 == 0)
    {
        printf("%d is even", num);
    }
    else
    {
        printf("%d is odd", num);
    }
}

int main()
{
    int num, factorial;
    printf("enter a number :");
    scanf("%d", &num);

    factorial = fact(num);
    printf("%d factorial is %d\n", num, factorial);

    fibo(num);
    printf("\n");

    odd_even(num);
    return 0;
}