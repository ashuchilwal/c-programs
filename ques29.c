// write a program to check whether given pair of numbers are co-prime or not

#include<stdio.h>
int main()
{
    int num1, num2, i=2, count=0, h;
    printf("enter two numbers : ");
    scanf("%d%d", &num1, &num2);

    h=num1<num2?num1:num2;
    while (i<=h)
    {
        if(num1%i==0 && num2%i==0)
            count++;
        i++;
    }
    if(count==0)
        printf("Co-prime numbers");
    else
        printf("Not co-prime numbers");  
    
    return 0;
    
}