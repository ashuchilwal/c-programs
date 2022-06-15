// series sum = 1^2 + 2^2 + 3^2

#include<stdio.h>
int main()
{
    int i, n, sum = 0;

    printf("enter range : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("series is :");
        printf("%d^2 + ", i);
        sum = sum + i*i;
        
    }
    printf("\nsum of series : %d", sum);
    return 0;
}