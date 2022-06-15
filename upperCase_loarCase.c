#include<stdio.h>
int main()
{
    char c;

    printf("enter a char : ");
    scanf("%c", &c);

    if(c>='A' && c<='Z')
    {
        c = c+32;
        printf("%c", c);
    }
    else if(c>='a' && c<='z')
    {
        c = c-32;
        printf("%c", c);
    }
    else
    {
        printf("invalid input");
    }
}