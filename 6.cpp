#include<stdio.h>
#include<conio.h>
main()
{
	int num, a=0, b=1, c, i;
	printf("enter a number : ");
	scanf("%d", &num);
	printf("\nfibonacci series : \n");
	printf("\n%d %d ",a,b);
	for(i=2; i<=num; i++)
	{
		c = a+b;
		a = b;
		b = c;
		printf("%d ",c);	
	}
	getch();
}

