#include<stdio.h>
void fac(int *p)
{
	int i,j=0,a[20];
	for(i=1;i<=(*p/2);i++)
	{
		if((*p)%i==0)
		{
			a[j]=i;
			j++;
		}
	}
	for(i=0;i<j;i++)
	{
		printf("%d  ",a[i]);
	}
}
int main()
{
	puts("Please enter the number");
	int n;
	scanf("%d",&n);
	fac(&n);
}
