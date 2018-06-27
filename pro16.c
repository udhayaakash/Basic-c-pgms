#include<stdio.h>
void lcm_gcd(int,int,int*,int*);
int main()
{
	int a,b;
	printf("Please enter the numbers");
	scanf("%d%d",&a,&b);
	lcm_gcd(a,b,&a,&b);
	return 0;
}

void lcm_gcd(int a,int b,int*p,int*q)
{
	int g,l,r,n,d;
	if(a>b)
	{
		n=*p;
		d=*q;
	}
	else
	{
		n=*q;
		d=*p;
	}
	r=n%d;
	while(r!=0)
	{
		n=d;
		d=r;
		r=n%d;
	}
	g=d;
	l=a*b/g;
	printf("The GCD is  %d",g);
	printf("The LCM is  %d",l);
}
