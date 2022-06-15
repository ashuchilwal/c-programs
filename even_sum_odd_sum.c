#include<stdio.h>
int main()
{
    int a[5], i, even_count=0, even_sum=0, odd_count=0, odd_sum=0;

    printf("enter element of array : ");

    for(i=0; i<5; i++)
        scanf("%d", &a[i]);

    for(i=0; i<5; i++)
    {
        if(a[i]%2==0)
        {
            even_sum=even_sum+a[i];
            even_count+=1;
        }
        else
        {
            odd_sum=odd_sum+a[i];
            odd_count+=1;
        }
            
    }
    printf("even element are %d sum is %d \n odd element are %d sum is %d", even_count, even_sum, odd_count, odd_sum);
    return 0;

}