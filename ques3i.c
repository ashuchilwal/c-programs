#include<stdio.h>

int gcd(int a, int b)
{
    if(a==b)
        return a;
    if(a%b==0)
        return b;
    if(b%a==0)
        return a;
    if(a>b)
        return(gcd(a%b, b));
    else
        return(gcd(a, b%a));
}
int main()
{
    int n1, n2;
    printf("enter two number : ");
    scanf("%d%d", &n1, &n2);

    printf("gcd is : %d", gcd(n1, n2));
    return 0;
}