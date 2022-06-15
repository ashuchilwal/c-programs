#include<stdio.h>
int main()
{
    int arr[5], i, sum = 0;
    float avg;

    printf("enter 5 subject marks :");
    
    for(i=0; i<5; i++)
    {
    scanf("%d", &arr[i]);
    }
    for(i=0; i<5; i++)
    {
    printf("\n%d", arr[i]);
    }

    for(i=0; i<5; i++)
    {
        sum = sum+arr[i];
    }
    printf("\ntotal marks is %d", sum);

    avg = sum/5;
    printf("\naverage is %f", avg);

    return 0;
}