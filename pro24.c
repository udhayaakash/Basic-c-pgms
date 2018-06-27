#include<stdio.h>
int dig(int m)
{
	if(m==0)
	return 0;
	else
	return ((m%10)+dig(m/10));
}

int main()
{
	int n,sum;
	printf("Pleas enter the number\n");
	scanf("%d",&n);
	sum=dig(n);
	printf("%d",sum);
}
