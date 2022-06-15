#include<stdio.h>
int main(){
    int num;

    printf("enter a number");
    scanf("%d", &num);

    if(num%2 == 0)
    printf("number is Even");
    else
    printf("number is Odd");
    return 0;
}