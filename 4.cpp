#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
main()
{
	char str[50];
	int i, j, temp;
	cout<<"enter a  string : ";
	gets(str);
	j = (strlen(str) - 1);
	for(i=0; i<j; i++ && j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	puts(str);
	getch();
}
