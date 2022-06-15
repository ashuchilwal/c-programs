#include<stdio.h>
int main()
{
    int a = 10, b = 9, c, d;
    int *p, *q, *r;

    p = &a;
    q = &b;

    printf("value of a is : %d\n", a);
    printf("value of a is : %d\n", *p);

    printf("address of a is : %d\n", &a);
    printf("address of a is : %d\n", p);

    printf("value of b is : %d\n", b);
    printf("value of b is : %d\n", *q);

    c = *p;

    printf("value of c is : %d\n", c);

    r = (&a, &b);
    printf("value of d is : %d\n", *r);
}