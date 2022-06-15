#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, s, area;

    printf("enter 3 sides of triangle :");
    scanf("%f%f%f", &a,&b,&c);

    if(a+b>c && b+c>a && c+a>b)
    {
        s = (a+b+c)/2;
        
        area = sqrt(s*(s-a)*(s-b)*(s-c));

        printf("area of traingle is : %f", area);
    }
    else
    {
        printf("sides do not make triangle");
    }
  
  return 0;
}