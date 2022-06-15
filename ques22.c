// Write a program to print all Armstrong numbers under 1000.

#include<stdio.h>
int main()
{
    int n, i, r, sum=0;

    for(n=1; n<=1000; n++)
    {
        sum=0;
        for(i=n; i!=0; )
        {
            r=i%10;
            sum=sum+(r*r*r);
            i=i/10;
        }
        if(sum==n)
        {
            printf("%d",n);
            printf("\n");
        }

    }
    return 0;
}