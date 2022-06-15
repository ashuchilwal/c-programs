#include<stdio.h>
void febo_ser(int a, int b)
{
    int c, i, d;

    printf("febonicchi series in range %d and %d", a, b);

    c = a+1;
    printf("%d %d", a, c);

    for(i=c; i<b; i++)
    {
        d = a+c;
        printf(" %d", d);
        a = c;
        c = d;
    }
}

void is_prime(int a, int b)
{
    int i, j;

    printf("\nPrime Numbers in range %d and %d : ", a, b);

    for(i=a; i<=b; i++)
    {
        for(j=2; j<=i; j++)
            if(i%j==0)
            {
                break;
            }
        if(j==i)
        {
            printf(" %d", i);
        }
    }
}

void is_perfact(int a, int b)
{
    int x, i;
    printf("\nPerfact number in range %d and %d : ", a,b);
    for(x=a; x<=b; x++)
    {
        int sum=0;
        for(i=1; i<x; i++)
        {
            if(x%i==0)
            {
                sum=sum+i;
            }
        }
        if(x==sum)
        {
            printf(" %d", x);
        }
        
        
    }
    
}

void main()
{
    int r1, r2;
    printf("Enter range R1 and R2 : ");
    scanf("%d%d", &r1, &r2);

    febo_ser(r1, r2);
    is_prime(r1, r2);
    is_perfact(r1, r2);
}