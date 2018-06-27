#include<stdio.h>
void swap(int *p,int *q,int *r)
{
	int temp;
	temp=*r;
	*r=*q;
	*q=temp;
	
	temp=*q;
	*q=*p;
	*p=temp;	
}
int main()
{
	int a,b,c;
	printf("Please enter the numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	swap(&a,&b,&c);
	printf("a=%d ,b=%d ,c=%d",a,b,c);
	return 0;
}
