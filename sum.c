#include<stdio.h>
int sum(int a, int b)
{
    int sum;
    sum = a+b;
    printf("sum is %d", sum);

}
int main()
{
    int a, b;
    printf("enter two numbers :");
    scanf("%d%d", &a,&b);
    sum(a,b);
    return 0;
    
}
