#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str[10];
	printf("enter a string : ");
	gets(str);
	printf("%d is length of string\n ",strlen(str));
	strrev(str);
	puts(str);
	getch(); 
}

