#include<stdio.h>
int main()
{
    char s[10], p[10];
    int l, i, j=0, m, n;

    printf("enter two string : ");
    gets(s);
    gets(p);

    for(i=0; s[i]; i++)
    {
        for(j; p[j]; j++)
        {
            if(s[i]==p[j])
            {
                j++;
                break;
            }
            else
            {
                printf("%c", s[i]);
                j++;
                break;
            }

        }
    }
    printf("\n");
    i=0;
    for(j=0; p[j]; j++)
    {
        for(  ; s[i]; i++)
        {
            if(s[i]==p[j])
            {
                i++;
                break;
            }
            else
            {
                printf("%c", p[j]);
                i++;
                break;
            }

        }
    }
    
    return 0;
    
}