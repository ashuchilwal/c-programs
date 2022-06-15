#include<stdio.h>
int main(){
    int num, rem, sum = 0;

    printf("enter a number :");
    scanf("%d", &num);

    while (num%10!=num)
    {
        sum = 0;
        while (num>0)
        {
            rem = num%10;
            sum += rem;
            num = num/10;
        }
        num = sum;
        printf("sum of digit : %d\n", sum);
    }
    
}


