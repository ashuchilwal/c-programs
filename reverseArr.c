#include<stdio.h>
int main()
{
    int ar[5], i;

    printf("enter 5 element of array : ");

    for(i=0; i<5; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("\n");
    for(i=4; i>=0; i--)
    {
        printf("\n index is %d and element is %d", i, ar[i]);
    }
    return 0;
}