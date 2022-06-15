#include<stdio.h>
char* remove_duplicates(char* s);
void main()
{
    char s[]="AAABBBCCDAB";
    printf("%s", remove_duplicates(s));
}

char* remove_duplicates(char* s)
{
    int i, j;
    for(i=0; s[i]; i++)
    {
        if(s[i]==s[i+1])
        {
            for(j=i; s[j]; j++)
            {
                s[j]=s[j+1];
            }
            i--;
        }
    }
    return(s);
}