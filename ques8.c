// using if_else

// #include<stdio.h>
// int main()
// {
//     int a, b, c;

//     printf("enter 3 numbers :");
//     scanf("%d%d%d", &a,&b,&c);

//     if(a<b && a<c)
//     {
//         printf("a is minimum");
//     }
//     else if (b<a && b<c)
//     {
//         printf("b is minimun");
//     }
//     else
//     printf("c is minimum");
//     return 0;
// }


#include<stdio.h>
int main()
{
    int a, b, c, min;

    printf("enter 3 numbers :");
    scanf("%d%d%d", &a,&b,&c);
    min=a;
    if(b<min)
    {
        min = b;
    }
    if(c<min)
    {
        min = c;
    }
    printf("value of min %d", min);
    return 0;
}