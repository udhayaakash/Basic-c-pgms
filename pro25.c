#include<stdio.h>
#include<string.h>
struct bs
{
	char nn[5];
	char ss[5];
	char cc[5];
	int an;
	char at[15];
	int pb;
	int cp;
	int nb;
	int month;
	int year;	
};

struct bs details()
{
	struct bs a;
	puts("Please enter the details of the customer");
	scanf("%s\n %s\n %s\n %d\n %d\n %d\n %d\n %d",a.nn,a.ss,a.cc,&a.an,&a.pb,&a.cp,&a.month,&a.year);
	return a;
}

struct bs update(struct bs a)
{
	int cpp,pbb;
	cpp=a.cp;
	pbb=a.pb;
	if((cpp>0)&&(cpp<(0.1*pbb)))
	strcpy(a.at,"overdue");
	else if((pbb>0)&&(cpp==0))
			strcpy(a.at,"delinquent");
		 else
			strcpy(a.at,"current");
			
	a.nb=pbb-cpp;
	return a;		
}

void printing(struct bs a)
{
	printf("name:%s\n street:%s\n city:%s\n acc no:%d\n acc type:%s\n pb:%d\n cp:%d\n nb:%d\n month:%d\n year:%d\n    ",a.nn,a.ss,a.cc,a.an,a.at,a.pb,a.cp,a.nb,a.month,a.year);
}

int main()
{
	puts("Please enter the number of customers to be processed");
	int n,i;
	scanf("%d",&n);
	struct bs aa[n],q;
	for(i=0;i<n;i++)
	{
		aa[i]=details();
	}
	for(i=0;i<n;i++)
	{
		aa[i]=update(aa[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printing(aa[i]);
	}
}
