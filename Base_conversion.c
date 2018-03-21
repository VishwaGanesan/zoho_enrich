#include<stdio.h>
long int conversion(int n,int base)
{
	int i,k=1,s;
	long int a=0;
	while(n>0)
	{
		s=n%base;
		a+=s*k;
		n/=base;
		k=k*10;
	}
	return a;
}
int main()
{
	int n,base;
	scanf("%d %d",&n,&base);
	printf("%ld ",conversion(n,base));
}
