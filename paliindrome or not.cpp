#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int num,dummy,revnum=0,x;
	cout<<"enter a number :";
	cin>>num;
	dummy = num;
	while(num>0)
	{
		x = num%10;
		revnum = revnum*10 + x;
		num/=10;
	}
	if(dummy==revnum)
	{
		cout<<dummy<<" is palindrome";
	}
	else
	{
		cout<<dummy<< " is not palindrome";
	}
getch();
}
