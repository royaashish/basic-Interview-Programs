#include<iostream>
#include<conio.h>
using namespace std;
int fact(int n);
main()
{
int x;
cout<<"enter a number";	
cin>>x;
cout <<fact(x);
getch();
}
int fact(int n)
{
	if(n > 1)
		return(n*fact(n-1));
	else 
		return(1);
}
