#include<stdio.h>
int main()
{
    int arr1[5], arr2[5], i, sum1 = 0, sum2 = 0, sum_arr[2];

    printf("enter 5 element in arr1 : ");

    for(i=0; i<5; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(i=0; i<5; i++)
    {
        sum1 = sum1+arr1[i];
    }
    printf("sum of aar1 is %d",sum1);

    printf("\n enter element of arr2 : ");

    for(i=0; i<5; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for(i=0; i<5; i++)
    {
        sum2 = sum2+arr2[i];
    }
    printf("sum of arr2 is %d", sum2);

    for(i=0; i<2; i++)
    {
        sum_arr[0] = sum1;
        sum_arr[1] = sum2;
    }
    for(i=0; i<2; i++)
    {
        printf("\nsum_arr is %d", sum_arr[i]);
    }
    return 0;
}