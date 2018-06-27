#include<stdio.h>
struct book
{
	int accno;
	char title[10];
	int price;
	struct myp
	{
		int month;
		int year;
	}p;
};

struct book read(struct book aa)
{
   	printf("Please enter the details of the book ");
   	scanf("%d%s%d%d%d",&aa.accno,aa.title,&aa.price,&aa.p.month,&aa.p.year);
	return aa;
   	
}

struct book* search(struct book aa[10],int y,int z)
{
	int i;
	struct book *ptr;
	for(i=0;i<z;i++)
	{
		if(aa[i].accno==y)
		{
			ptr=&aa[i];
		}
	}
	return ptr;
}

int main()
{
	int n,i,y;
	printf("Please enter the value of n");
	scanf("%d",&n);
	struct book aa[n],aaa;
	struct book *o;
	for (i=0;i<n;i++)
	{
		aa[i]=read(aa[i]);
	}
	printf("Please enter the accno of the book you want to search");
	scanf("%d",&y);
	o=search(aa,y,n);
	aaa=*o;
	printf("%d%s%d%d%d",aaa.accno,aaa.title,aaa.price,aaa.p.month,aaa.p.year);
	puts("The details of the books published in the current year is given below");
	for (i=0;i<n;i++)
	{
		if(aa[i].p.year==2018)
		printf("%d%s%d%d%d",aa[i].accno,aa[i].title,aa[i].price,aa[i].p.month,aa[i].p.year);
	}
}
