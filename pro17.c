#include<stdio.h>
struct drugs
{
	int code;
	char a[10];
	struct date
	{
		int month;
		int year;
	}p;
	int count;
};

struct drugs read()
{
	struct drugs aa;
	puts("Please enter the details of the drug");
	scanf("%d%s%d%d%d",&aa.code,aa.a,&aa.p.month,&aa.p.year,&aa.count);
	return aa;
}

int edrugs(struct drugs pp[5],int v)
{
	int b=0,mm,yy,i;
	puts("please enter the current date in mmyy");
	scanf("%d%d",&mm,&yy);
	for(i=0;i<v;i++)
	{
		if(pp[i].p.year<yy)
		b=b+(pp[i].count);
		else if ((pp[i].p.year==yy)&&(pp[i].p.month<mm))
		b=b+(pp[i].count);
	}
	return b;
}


int main()
{
	puts("Please enter the number of type of drugs");
	int n,i,c;
	scanf("%d",&n);
	struct drugs a[n];
	for(i=0;i<n;i++)
	{
		a[i]=read();
	}
	c=edrugs(a,n);
	printf("The number of drugs epired are %d",c);
}
