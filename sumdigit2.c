#include<stdio.h>
int main()
{
    int num, ch, sum=0;

    do{
        printf("enter a number :");
        scanf("%d", &num);
        ch = num;
        while (num)
        {
            sum = sum + num%10;
            num = num/10;
        }
        printf("sum of digit : %d\n", sum);
    }
    while (ch);
    
}