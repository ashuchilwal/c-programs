#include<stdio.h>

int largest_smallest_arr(int arr[5])
{
    int i, largest, smallest;

    printf("enter 5 element of arr : ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for(i=0; i<5; i++)
    {
       if(arr[i]>largest)
       {
           largest=arr[i];
       } 
    }
    smallest = arr[1];
    for(i=0; i<5; i++)
    {
        if(arr[i]<smallest)
        {
            smallest = arr[i];
        }
    }
    printf("largest element of array is : %d", largest);
    printf("\nsmallest element of array is %d", smallest);
    return 0;
}
int main()
{
    int arr[5];
   largest_smallest_arr(arr); 
}