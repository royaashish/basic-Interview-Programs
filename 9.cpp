#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int n1,n2,i;
	cout<<"enter two number : \n";
	cin>>n1>>n2;
	
	cout<<"factor of "<<n1<<" & "<<n2<<" :\n";
	for(i=1; i<=n1 && i<=n2; i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			cout<<i<<" ";
		}
	}
getch();
}
