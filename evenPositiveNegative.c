#include<stdio.h>
int main()
{
    int num;
    printf("enter a number :");
    scanf("%d", &num);
    if(num%2 == 0)
    {
        if(num > 0)
        {
        printf("number is even positive");
        }
        else
        {
        printf("number is even negative");
        }
    
    }

    return 0;
}

