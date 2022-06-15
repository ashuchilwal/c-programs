// Write a program to print table of user’s choice

#include<stdio.h>
int main()
{
    int i=1, n;
    printf("enter the number which you want table : ");
    scanf("%d", &n);

    while(i<=10)
    {
        printf("%d", i*n);
        printf("\n");
        i++;
    }
    return 0;
}