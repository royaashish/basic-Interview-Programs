#include<iostream>
#include<conio.h>
 using namespace std;
 
 main()
 {
	int year;
	cout<<"enter the year";
	cin>>year;
	if(year % 4 == 0 )
	{
		cout<<year<<" is a leap year";
	}
	else
	{
		cout<<year<<" is not a leap year";
	}
	getch();
 }
