// Write a program to convert a binary number to decimal number improved logic

#include<stdio.h>
int b_to_d(char s[]);

int main()
{
    printf("%d", b_to_d("110"));
}

int b_to_d(char s[])
{
    int i, d=0;

    for(i=0; s[i]; i++)
    {
        if(s[i]=='0')
            d=d*2+0;
        else
            d=d*2+1;
    }
    return d;
}