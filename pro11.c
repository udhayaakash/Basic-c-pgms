#include<stdio.h>
int main()
{
	int i,sum=0,n,a[10];
	int *p=a;
	puts("Enter the size of the array");
	scanf("%d",&n);
	puts("Please enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
		sum=sum+(*(p+i));
	}
	printf("Sum is:%d",sum);
	
}
