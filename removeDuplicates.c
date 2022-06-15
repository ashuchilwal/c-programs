#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    int i, j;

    printf("enter a string : ");
    gets(s);

    for(i=0; i<strlen(s); i++)
    {
        if(s[i]==s[i+1])
        {
            for(j=i; j<strlen(s); j++)
                s[j]=s[j+1];

            i--;
        }
    }
    printf("%s", s);
}