// #include<stdio.h>
// void main()
// {
//     char s;
//     int i_ch, n = 6;
//     for(i_ch=0; i_ch<n; i_ch++)
//     scanf("%c", &i_ch);

//     printf(s[i_ch]);
// }


// #include<stdio.h>
// int main()
// {
//     char s="ashish";
//     int i, n = 6;
//     for(i=0; i<n; i++)
//     printf(s[i]);
//     return 0;
// }

#include<stdio.h>
int main()
{
	char ch;
    printf("enter char :");
	scanf("%c", &ch);

	if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
	{
		printf("Alphabet");
	}
	else if(ch=48 && ch<=57)
	{
		printf("Digit");
	}
	else 
	{
		printf("Special Character");
	}
	return 0;
}