#include<stdio.h>
void pn(int n)
{
	int i,j,sum;
	for(i=2;i<=n;i++)
	{
		sum=0;
		for(j=1;j<=i/2;j++)
		{
			if(i%j==0)
			{
				sum+=j;
			}
		}
		if(i==sum)
		printf("%d  ",i);
	}
}

int main()
{
	int n;
	puts("Please enter the range");
	scanf("%d",&n);
	pn(n);
}
