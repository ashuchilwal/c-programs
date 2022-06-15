#include<stdio.h>
void main()
{
    int n_natural(int a);

    int n;
    printf("Enter the range of natural number : ");
    scanf("%d", &n);

    n_natural(n);
}

int n_natural(int a)
{
    if(a>=1)
        printf(" %d", a);
        n_natural(a-1);
}