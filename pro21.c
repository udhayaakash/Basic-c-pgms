#include<stdio.h>
float fac(int i)
{
	int n;
	float f=1,p;
	for(n=1;n<=i;n++)
	{
		f=f*n;
	}
	p=f/i;
	return p;
}


int main()
{
	float sum=0,i,c;
	for(i=1;i<6;i++)
	{
		c=fac(i);
		sum=sum+c;
	}
	printf("%f",sum);
}
