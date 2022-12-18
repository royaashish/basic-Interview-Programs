#include<iostream>
#include<conio.h>

using namespace std;

int fact(int n);
main()
{
	int a,t;
	cout<<"enter a number : ";
	cin>>a;
	t = fact(a);
	cout<<"factorial of a number = "<<t;
	getch();
}
int fact(int n)
{
	if(n>0)
	{
		return(n*fact(n-1)); 
	}
	else
	{
		return(1);
	}
}
