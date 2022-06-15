#include<stdio.h>
int main()
{
    int factorial(int);

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    printf("%d", factorial(n));
}

int factorial(int a)
{
    if(a==1)
        return 1;
    return(a*factorial(a-1));
}
