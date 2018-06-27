#include<stdio.h>
struct vec
{
	int a[10];
}b[5];
int main()
{
	puts("Please enter the number of vectors");
	int n,k,i,p,j;
	scanf("%d",&n);
	puts("Please enter the size of the vector");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		printf("Please enter the values of vector %d",i+1);
		for(j=0;j<k;j++)
		{
			scanf("%d",&b[i].a[j]);
		}
	}
	puts("Please enter the value of i and j to modify it to p");
	scanf("%d%d%d",&i,&j,&p);
	b[i-1].a[j-1]=p;
	puts("Please enter the value of i and j to multiply it by a scalar p");
	scanf("%d%d%d",&i,&j,&p);
	b[i-1].a[j-1]=(b[i-1].a[j-1])*p;
	
	for(i=0;i<n;i++)
	{
		printf("The values of vector %d is as follows",i+1);
		for(j=0;j<k;j++)
		{
			printf("%d",b[i].a[j]);
		}
	}	
}
