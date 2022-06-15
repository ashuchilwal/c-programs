// Write a program to print N co-prime numbers

#include <stdlib.h>
#include<stdio.h>
int main()
{
    int n, a=2, b, i, min;
    printf("enter the value how many co-prime number you want : ");
    scanf("%d", &n);

    while(n)
    {
        for(b=2; b<=a; b++)
        {
            min=a<b?a:b;
            for(i=2; i<=min; i++)
            {
                if(a%i==0 && b%i==0)
                    break;
            }
            if(i==min+1)
            {
                printf("\n(%d, %d)", a, b);
                n--;
                if(n==0)
                    exit(0);
            }
        }
        a++;
    }
}