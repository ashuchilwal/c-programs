#include<stdio.h>
int main()
{
    char s[10], d;
    int i;

    printf("enter a string :");
    gets(s);
    printf("enter a char which you want to remove : ");
    scanf("%c", &d);

    for(i=0; s[i]; i++)
    {
        if(s[i]==d)
        continue;
        else
        {
            printf("%c", s[i]);
            
        }
    }

}