#include<stdio.h>
int main()
{
    int sum_digit(int);

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    printf("%d",sum_digit(n));

}
int sum_digit(int a)
{
    if(a>0)
        return(a%10 + sum_digit(a/10));
}