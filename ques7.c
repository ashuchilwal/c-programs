#include<stdio.h>
int main()
{   
    int m, e, p, c, cs, s;
    float sum, percent;

    printf("Enter 6 subject numbers : ");
    scanf("%d%d%d%d%d%d", &m, &e, &p, &c, &cs, &s);

    sum = m + e + p + c + cs + s;
    percent = sum/6;

    printf("Total number is : %f\n", sum);
    printf("Percent is : %f\n", percent);

    if(percent>80)
    {
        printf("Grade A ");
    }

    else if(61 < percent > 80)
    {
        printf("Grade B ");
    }

    else if(51 < percent > 60)
    {
        printf("Grade C ");
    }

    else if(41 < percent > 50)
    {
        printf("Grade D ");
    }

    else if(35 < percent > 40)
    {
        printf("Grade E ");
    }

    else if(35 > percent)
    {
        printf("Grade F ");
    }

    return 0;
}