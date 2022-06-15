// with temp variable

// #include<stdio.h>
// int main(){

//     int a = 10, b = 20, temp = 4;

//     temp = a;
//     a = b;
//     b = temp;

//     printf("Values of a and b is : %d\n%d", a, b);
//     return 0;

// }

// without temp variable

#include<stdio.h>
int main()
{
    int a = 10, b = 20;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("value of a and b after swapping : %d %d", a, b);

}