#include<stdio.h>
#include<string.h>
int main()
{
	puts("please enter the string");
	char n[10];
	gets(n);
	int i,count=0,j,ma=1,v,p=0,pp;
	puts("The elements of the string are printed\n");
	for(i=0;n[i]!='\0';i++)
	{
		count++;
		if(n[i]==' ')
		p++;
		else
		printf("%c\n",n[i]);	
	}
	printf("The len of the string is %d\n",count);	
	printf("The num of words in the string is %d\n",p+1);
	for(i=0;i<count-1;i++)
	{
		pp=1;
		for(j=i+1;n[j]!='\0';j++)
		{
			if((n[i]==n[j])&&(n[i]!='*'))
			{
				pp++;
				n[j]='*';
			}
		}
		if(pp>ma)
		{
		ma=pp;
		v=i;
	    }
	}
	printf("The char with max occurance is %c\n",n[v]);
}
