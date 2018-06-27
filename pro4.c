#include<stdio.h>
double power(double,int);
int main()
{
	int n;
	double m,c;
	puts("Please enter the value of m and n\n");
	scanf("%lf%d",&m,&n);
	if(n==0)
	n=2;
	c=power(m,n);
	printf("The value of m power n is %lf\n",c);

}

double power(double a,int b)
{
	int i;
	double p=1;
	for(i=0;i<b;i++)
	{
		p=p*a;
	}
	return p;
}
