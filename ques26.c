// Write a program to print all prime numbers between two given numbers

#include<stdio.h>
int main()
{
    int r1, r2, i, j, count=0;
    printf("enter range r1 and r2 : ");
    scanf("%d%d", &r1, &r2);

    printf("prime numbers are in range %d and %d : ", r1, r2);

    for(i=r1<r2?r1:r2; i<=(r1>r2?r1:r2); i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==2)
            printf("%d ", i);
        count=0;
    }
    return 0;
}