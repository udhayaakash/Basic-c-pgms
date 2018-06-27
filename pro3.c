#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	char a[20];
	puts("Please enter the string\n");
	gets(a);
	int vow=0,con=0,dig=0,spc=0,i;
	
	for(i=0;i<strlen(a);i++)
	{
		if(isalpha(a[i])!=0)
		{
			if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
			++vow;
			else 
		    ++con;
		}
	
				
		if(isdigit(a[i])!=0)
		++dig;
		if(a[i]==' ')	
		++spc;	
	}
	
	printf("%d\n%d\n%d\n%d\n",vow,con,dig,spc);
	return 0;
}
