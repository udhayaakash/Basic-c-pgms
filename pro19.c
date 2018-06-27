#include<stdio.h>
int main()
{
	printf("Please enter the value of n");
	int n,i,j,p=0,q=0;
	scanf("%d",&n);
	int a[n],b[n],c[n];
    printf("Please enter the elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
    	int count=1;
    	for(j=i+1;j<n;j++)
    	{
    		if((a[i]==a[j])&&(a[j]!='*'))
    		{
    			count++;
    			a[j]='*';
			}
		}
		if(a[i]!='*')
		printf("The frequency of %d is %d\n",a[i],count);
		if((a[i]!='*')&&(count!=1))
		{
			b[p]=a[i];
			p++;
		}
		else if(a[i]!='*')
		{
			c[q]=a[i];
			q++;
		}
	}
	printf("The unique elements are ");
	for(i=0;i<q;i++)
	printf("%d  ",c[i]);
	printf("The non unique elements are ");
	for(i=0;i<p;i++)
	printf("%d  ",b[i]);
}
