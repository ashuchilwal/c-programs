#include<stdio.h>
int main()
{
    int a[5], i, largest, smallest;

    printf("enter element of array : ");
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);

    largest=a[0];
    smallest=a[1];
    for(i=0; i<5; i++)
    {

        if(a[i]>largest)
            largest=a[i];

        if(a[i]<smallest)
            smallest=a[i];
    }

    printf("largest is %d and smallest is %d", largest, smallest);
    return 0;
}