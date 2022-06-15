#include<stdio.h>
char* reverse(char*);
int main()
{
    printf("%d",reverse("computer"));
    printf("%s", reverse("computer"));
    
}

char* reverse(char *p)
{
    int i, l;
    char t;

    for(l=0; *(p+l)!='\0'; l++);

    for(i=0; i<l/2; i++)
    {
        t=*(p+i);
        *(p+i)=*(p+l-1-i);
        *(p+l-1-i)=t;
    }
    return(p);
}