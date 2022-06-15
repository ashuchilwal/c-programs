#include<stdio.h>

int main()
{
    int linear_search(int a[], int length, int item, int i);

    int a[]={1,2,3,4,5,6,7,8};
    int length=7, item=11, i=0, r;

    r = linear_search(a, length, item, i);

    if(r==1)
        printf("Sucessful");
    else
        printf("Unsucessful");
}   


int linear_search(int a[], int length, int item, int i)
{
    if(length<i)
        return(-1);
    if(a[i]==item)
        return 1;
    else
        linear_search(a, length, item, i+1);


}