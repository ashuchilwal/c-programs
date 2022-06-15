#include<stdio.h>

int fibo(int num)
{
    int i, n1 = 0, n2 = 1, n3;

    printf("%d%d",n1, n2);

    for(i=2; i<num; ++i)
    {
        n3 = n1+n2;
        printf("%d",n3);

        n1 = n2;
        n2 = n3;

    }
}

int main()
{
    int num;

    printf("enter a number :");
    scanf("%d",&num);


    fibo(num);

    return 0;

}