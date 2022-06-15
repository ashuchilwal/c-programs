// s = 1 + 1/2 + 1/3 + 1/4.........1/n
#include<stdio.h>
int main()
{
    int i, n;
    float s = 0.0;

    printf("enter range : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        
        s = s +  (float)1/i;
        printf(" %f +", (float) 1/i);
    }
    printf("\n sum = %f", s);
}