// Program to print ASCII chart

#include<stdio.h>
int main()
{
    int x;

    for(x=0; x<=255; x++)
    {
        // if(x%24==0)
        // {
        //     getch();
        //     system("cls");
        // }
        printf("\n%d %c", x, x);
    }
    return 0;
}