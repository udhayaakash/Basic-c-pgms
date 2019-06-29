#include<stdio.h>

int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
}

int findlcm(int arr[], int n) 
{ 
    // Initialize result 
    int ans = arr[0]; 
  int i;
    for (i = 1; i < n; i++) 
        ans = (((arr[i] * ans)) / 
                (gcd(arr[i], ans))); 
  
    return ans; 
} 

int main()
{
	int t;
	scanf("%d",&t);
	
	while(t>0)
	{
	
	int n;
	scanf("%d",&n);
	int a[n];
	int b[n];
	//printf("n=%d",n);
	int i,j,k,q,count;
	for (i=0;i<n;i++)
	{
	//	printf("i=%d",i);
		scanf("%d",&a[i]);
	}

	for (i=0;i<n;i++)
	{
		count=0;
		k=a[i];
		q=a[i];		
		
		while(q!=a[k-1]){
			k=a[k-1];	
		//	printf("\nK=%d",k);
			count++;		
		}
		
//		do
//		{
//		k=a[k];
//		k--;
//		printf("%d",k);
//		count++;
//		}while(k!=i);
		b[i]=count+1;
	
	}
int c[n];
int w=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((b[i]==b[j])&&(b[j]!='*'))
			{

				c[w]=b[j];
				b[j]='*';
				//printf("%d",c[w]);
				w++;
			}
		}
	}
	
	int e[w];
//	printf("w=%d\n",w);
	
	for(i=0;i<w;i++)
	{
		e[i]=c[i];
		//printf("%d\n",e[i]);
	}
	
		printf("%d", findlcm(e, w));
		
		t--;
	}
}

