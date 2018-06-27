#include<stdio.h>
void ins(int b[],int,int,int);
int main()
{
	int i,n,p,q;
	printf("Please enter the size of the array");
	scanf("%d",&n);
	n=n+1;
	int a[n];
	printf("Please enter the elements of the array");
	for(i=0;i<(n-1);i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Please enter the new element to be inserted");
	scanf("%d",&p);	
	printf("Please enter the position of the new element to be inserted");
	scanf("%d",&q);
	q=q-1;
	ins(a,n,p,q);
	printf("The elements of the new array is:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}	
	
}

void ins(int b[],int aa,int bb,int cc)
{
	int i;
	for(i=(aa-2);i>=cc;i--)
	{
		b[i+1]=b[i];
	}
	
	b[cc]=bb;
}
