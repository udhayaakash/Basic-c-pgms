#include<stdio.h>

struct cmp
{
	float r;
	float i;
};
void comp(struct cmp y,struct cmp z);
int main()
{
	struct cmp a,b;
	printf("Please enter the real and imaginary parts of first number");
	scanf("%f%f",&a.r,&a.i);
	printf("Please enter the real and imaginary parts of second number");
	scanf("%f%f",&b.r,&b.i);
	
	comp(a,b);	
}

void comp(struct cmp y,struct cmp z)
{
	struct cmp q;
	q.r=y.r+z.r;
	q.i=y.i+z.i;
	
	printf("The sum is:%f+i%f",q.r,q.i);
}
