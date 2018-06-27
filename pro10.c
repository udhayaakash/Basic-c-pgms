#include<stdio.h>
int main()
{
	int a,b;
	puts("Please do enter the coordinates:");
	scanf("%d%d",&a,&b);
	if(a>0)
	{
		if(b>0)
		puts("First Coordinate");
		else
		puts("Fourth Coordinate");
	}
	else
	{
		if(b>0)
		puts("Second Coordinate");
		else
		puts("Third Coordinate");
	}
	
}
