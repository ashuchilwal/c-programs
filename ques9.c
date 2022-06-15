#include<stdio.h>
int main()
{
    int a, b, c, d, avg;

    printf("Enter four numbers :");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if(a<b && a<c && a<d)
    {
        printf("avg = %d", avg = (b+c+d)/3);
    }
    else if(b<a && b<c && b<d)
    {
        printf("avg is : %d", avg= (a+c+d)/3);
    }
    else if(c<a && c<b && c<d)
    {
        printf("avg is : %d", avg= (a+b+d)/3);
    }
    return 0;
}