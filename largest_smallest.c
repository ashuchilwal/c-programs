#include<stdio.h>
int main()
{
    int a[5], i, largest, smallest;

    printf("enter 5 element of array : ");

    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    largest = a[0];
    for(i=0; i<5; i++)
    {
        if(a[i]>largest)
        {
            largest = a[i];
        }
    }
    smallest = a[1];
    for(i=0; i<5; i++)
    {
        if(a[i]<smallest)
        {
            smallest = a[i];
        }
    }

    printf("\nlargest is %d", largest);
    printf("\nsmallest is %d", smallest);
    return 0;
    
   
    
}