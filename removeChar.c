#include<stdio.h>
int main()
{
    char s[10], ch, c;
    int i, j;

    printf("enter a string : ");
    gets(s);
    printf("enter a char which you want to remove : ");
    scanf("%ch", &ch);

    for(i=0; s[i]; i++)
    {
        if(s[i]==ch)
        {
            for(j=i; s[j]; j++)
            s[j] = s[j+1];
        }
    }
    printf("string is %s", s);

    return 0;
} 