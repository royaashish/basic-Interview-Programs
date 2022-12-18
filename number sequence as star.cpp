#include<iostream>
#include<conio.h>
 using namespace std;
 
 main()
 {
 	int i,j,n = 1;
 	for(i=1; i<=4; i++)
 	{
 		for(j=1; j<=i; j++)
 		{
 		//**	n += 1; **//
 			cout<<n++<<" ";
		}
		cout<<"\n";
	}
	getch();
 }
