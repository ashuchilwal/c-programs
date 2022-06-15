// Write a program to convert a binary number to decimal number

#include<stdio.h>
#include <math.h>
int main()
{
    int b_num, sum=0, i=0;
    printf("enter a binary number which you want to convert into decimal : ");
    scanf("%d", &b_num);

    
    while(b_num)
    {
        sum=sum+pow(2,i)*(b_num%10);
        b_num=b_num/10;
        i++;
    }
   printf("decimal is %d", sum);
}