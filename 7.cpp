#include<iostream>
#include<conio.h>

using namespace std;
main()
{
	int num,i, flag = 0;
	cout<<"enter a number : ";
	cin>>num;
	for(i=2; i<=num/2; i++)
	{
		if(num%i == 0)
		{
			flag += 1;
			break;
		}
	}
	if(num == 1)
	{
		cout<<num<<" is neither prime nor composite";
	}
	else if(flag == 0)
	{
		cout<<num<<" is prime";	
	}
	else
	{
		cout<<num<<" num is not prime";
	}
getch();
}
