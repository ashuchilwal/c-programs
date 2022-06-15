#include<stdio.h>

int main()
{
    int r;
    float area;
    float pi=3.14;

    printf("Enter radius of circle : ");
    scanf("%d", &r);

    area = pi*r*r;
    printf("area of circle is %f", area);
    return 0;
}