// Write a program to print all prime factors of a given number. For example prime factors of 36 are 2,2,3,3

#include<stdio.h>
int main()
{
    int num, i;
    printf("enter a number : ");
    scanf("%d", &num);

    printf("prime factor of %d is : ", num);

    for(i=2; num>1; i++)
    {
        while(num%i==0)
        {
            printf("%d ", i);
            num=num/i;
        }
    }   
    return 0;
}