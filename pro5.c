#include<stdio.h>
#include<string.h>
void rev(char c[],int,int);
int main()
{
	puts("Please enter the sentence");
	char a[20];
	gets(a);
	int n;
	n=strlen(a);
	rev(a,0,n-1);
	puts(a);
	return 0;
}

void rev(char a[20],int i,int p)
{
   char temp;
   temp=a[i];
   a[i]=a[p-i];
   a[p-i]=temp;
   if(i==(p/2))
   {
   	return;
   }
   rev(a,i+1,p);
}
