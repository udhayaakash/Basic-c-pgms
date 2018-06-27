#include<stdio.h>
int main()
{
	printf("Please enter the value of m and n");
	int m,n;
	scanf("%d%d",&m,&n);
	int a[m][n],b[n][m],mu[m][m];
	printf("Please enter the elements of the matrix\n");
	int i,j,k;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			b[j][i]=a[i][j];
		}	
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",a[j][i]);
		}
		printf("\n");	
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			mu[i][j]=0;
			for(k=0;k<n;k++)
			{
				mu[i][j]=mu[i][j]+a[i][k]*b[k][j];	
			}
			
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d  ",mu[j][i]);
		}
		printf("\n");	
	}
	
	
}
