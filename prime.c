#include<stdio.h>
int main()
{
   int num, i, count = 1;
   printf("enter a number : ");
   scanf("%d",&num);

   for(i=2; i<=num; i++)
   if(num%i==0)
       count+=1;
   if(count == 2)
   printf("\n%d is prime", num);
   else
   {
       printf("count is %d", count);
       printf("\n%d is not prime", num);
   }
   return 0;
}