#include<stdio.h>

int fact(int n)
{
    if(n>0)
        return(n * fact(n-1));
    else
        return 1;

}
int main()
{

    int n;
    printf("enter a number : ");
    scanf("%d", &n);

    // x = fact(n);
    printf("factorial of %d is %d", n, fact(n));

}


        
