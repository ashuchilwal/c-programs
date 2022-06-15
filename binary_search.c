#include<stdio.h>
int main()
{
    int binary_search(int a[], int l, int u, int item);

    int a[]={1,2,3,4,5,5,6,7,8};
    int l=0, u=8, item=11, r;

    r = binary_search(a, l, u, item);
    if(r==-1)
        printf("search unsucessful");
}

int binary_search(int a[], int l, int u, int item)
{
    int m;
    if(l>u)
        return -1;
    m=(l+u)/2;
    if(item==a[m])
        printf("search sucessful");
    else if(item>a[m])
        return(binary_search(a, m+1, u, item));
    else
        return(binary_search(a, l, m-1, item));
}