// Write a program to calculate HCF of two numbers

#include<stdio.h>
int main()
{
    int num1, num2, min, h;
    printf("enter two numbers : ");
    scanf("%d%d", &num1, &num2);

    min=num1<num2?num1:num2;

    for(h=min; h>=1; h--)
    {
        if(num1%h==0 && num2%h==0)
            break;
    }
    printf("HCF is : %d ", h);
    return 0;
}