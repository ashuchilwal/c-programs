// Write a program to calculate LCM of two numbers

#include<stdio.h>
int main()
{
    int num1, num2, l;
    printf("enter two numbers : ");
    scanf("%d%d", &num1, &num2);
    
    for(l=1; l<=num1*num2; l++)
    {
        if(l%num1==0 && l%num2==0)
            break;
    }
    printf("LCM is %d", l);
    return 0;
}