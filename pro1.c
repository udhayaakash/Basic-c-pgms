#include<stdio.h>
void inc(int);
struct empid
{
	int id;
	char name[10];
	int sal;
	char dname[10];
}p[10];

int main()
{
	puts("Please enter the number of employees\n");
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Please enter the detail of emp :%d\n",i+1);	
		scanf("%d%s%d%s",&p[i].id,p[i].name,&p[i].sal,p[i].dname);	
	}
	
	inc(n);
	
	for(i=0;i<n;i++)
	{
		printf("Detail of emp :%d\n",i+1);	
		printf("%d\n%s\n%d\n%s\n",p[i].id,p[i].name,p[i].sal,p[i].dname);	
	}
}

void inc(int q)
{
	int i;
	for(i=0;i<q;i++)
	{
		p[i].sal+=((p[i].sal)*0.1);
	}

}
