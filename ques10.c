// Write a program to print first N even natural numbers in reverse order

#include<stdio.h>
int main()
{
    int i, n;
    printf("enter the value of n : ");
    scanf("%d", &n);

    i=n;
    do
    {
        printf("%d", 2*i);
        i--;
        printf("\n");
    } while (i>=1);
    return 0;
}