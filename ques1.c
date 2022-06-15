#include<stdio.h>

void remove_char(char a[10], char b)
{
    int i, j;

    for(i=0; a[i]; i++)
    {
        if(a[i] == b)
        {
            for(j=i; a[j]; j++)
            a[j] = a[j+1];
        }
    }
    printf("%s", a);

}

int main()
{
    char s[10], ch;

    printf("enter a string : ");
    gets(s);

    printf("\nenter a charactor which you want to remove from string : ");
    scanf("%ch", &ch);

    remove_char(s, ch);
}