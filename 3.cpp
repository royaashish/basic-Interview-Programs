#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char str[50];
	printf("enter a string : ");
	gets(str);
	strrev(str);
	puts(str);
	getch();
}
