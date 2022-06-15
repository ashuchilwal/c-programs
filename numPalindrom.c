#include<stdio.h>
int main()
{
    int num, r, reverse = 0, k;

    printf("enter a number : ");
    scanf("%d", &num);

    k = num;

    while(num!=0)
    {
        r = num%10;
        reverse = reverse*10+r;
        num = num/10;
    }
    if(k == reverse)
    printf("palindrom");
    else
    printf("Not pallindrom");
    return 0;
}