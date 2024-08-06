#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	printf("enter the value a:");
	scanf("%d",&a);
	
	printf("enter the value b:");
	scanf("%d",&b);
	
	printf("enter the value c:");
	scanf("%d",&c);
	
	if(a<b)
	{
		printf("a is maximum:");
		if(a<c)
		{
			printf("b is maximum:");
		}
		else
		{
			printf("c is maximum:");
		}
		
	}
	else
	{
		printf("c is maximum:");
	}
}
