// Write a program to calculate x power y.(when user input x is 2 and y is 3 then the result will be 8)

#include<stdio.h>
int main()
{
    int i=1, x, y, result=1;
    printf("enter the value of x and y : ");
    scanf("%d%d", &x, &y);

    while(i<=y)
    {
        result*=x;
        i++;
    }
    printf("%d power %d is = %d", x, y, result);
    return 0;
}