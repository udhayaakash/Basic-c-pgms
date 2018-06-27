#include<stdio.h>
struct bo
{
	int l;
	int b;
	int h;
	int v;
}p[10]; 
void gd(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		puts("Please enter the length");
		scanf("%d",&p[i].l);
		puts("Please enter the bredth");
		scanf("%d",&p[i].b);
		puts("Please enter the height");
		scanf("%d",&p[i].h);
		p[i].v=(p[i].l)*(p[i].b)*(p[i].h);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d   ",p[i].l);
		printf("%d   ",p[i].b);
		printf("%d   ",p[i].h);
		printf("%d   ",p[i].v);		
	}
}

void so(int n)
{
	int ma,i,j;
	struct bo temp;
	for(i=0;i<(n-1);i++){
	ma=i;
	for(j=i+1;j<n;j++)
	{
		if(p[ma].v>p[j].v)
		{
			ma=j;
		}	
	}
	temp =p[ma];
	p[ma]=p[i];
	p[i]=temp;
	
    }
	for(i=0;i<n;i++)
	{
		printf("             %d  ",p[i].l);
		printf("%d  ",p[i].b);
		printf("%d  ",p[i].h);
		printf("%d  ",p[i].v);		
	}
	
}

int main()
{
	puts("Please enter the number of box");
	int n;
	scanf("%d",&n);
	gd(n);
	so(n);
}
