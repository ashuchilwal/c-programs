// Using if-else

// #include<stdio.h>
// int main()
// {
//     int num;

//     printf("Enter a number :");
//     scanf("%d", &num);

//     if(num%2 == 0)
//       printf("Number is Even");

//     else
//       printf("Number id odd");

//     return 0;
// }


// Using switch case ******

// #include<stdio.h>
// int main()
// {
//   int num;

//   printf("Enter a number :\n");
//   scanf("%d", &num);
  
//   switch(num %2)
//   {
//   case 0:
//     printf("Even number\n");
//     break;
  
//   default:
//    printf("Odd number\n");
//     break;
//   }
//  return 0;
// }


// Using ternsry operator*************************

#include<stdio.h>
int main()
{
  int num;

  printf("enter a number :");
  scanf("%d", &num);

  (num%2 == 0) ? printf("Number is even ") : printf("number is odd");
  return 0;
}