#include<stdio.h>
int main()
{
    int fibo(int);

    int n, i;

    printf("enter the range of fibonacchi series : ");
    scanf("%d", &n);

    for(i=0; i<=n; i++)
    {
        printf(" %d", fibo(i));
    }
    return 0;
}

int fibo(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return(fibo(n-1) + fibo(n-2));
}