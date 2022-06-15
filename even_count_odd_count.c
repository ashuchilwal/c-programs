#include<stdio.h>
int main()
{
    int arr[10], i, even_count = 0, odd_count = 0;

    for(i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<10; i++)
    {
        if(arr[i]%2 == 0)
        {
            even_count += 1;
        }
        else
        {
            odd_count += 1;
        }
    }
    printf("\ntotal even no is : %d", even_count);
    printf("\ntotal odd no is %d", odd_count);
    return 0;
}