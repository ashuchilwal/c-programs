// Write a program to print first N odd natural numbers in reverse order

#include<stdio.h>
int main()
{
    int i, n;
    printf("enter the value of n : ");
    scanf("%d", &n);

    i=n;
    while (i>=1)
    {
        printf("%d", 2*i-1);
        i--;
        printf("\n");
    }
    return 0;
    
}