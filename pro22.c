#include<stdio.h>
void bin(int n)
{
	int p,b=0,a[10],i;
	while(n!=0)
	{
		p=n%2;
		a[b]=p;
		b++;
		n=n/2;
	}
	for(i=b-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}

int main()
{
	int n;
	printf("Please enter the decimal number\n");
	scanf("%d",&n);
	bin(n);
}
