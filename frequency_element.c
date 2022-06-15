#include<stdio.h>
int main()
{
    int a[5], i, j, count=0;

    printf("enter element of arry : ");

    for(i=0; i<5; i++)
        scanf("%d", &a[i]);

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(a[i]==a[j])
            {
                count+=1;
            }
        }
        printf("\nFrequency of %d is %d", a[i], count);
        count=0;
    }
}