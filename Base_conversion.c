#include<stdio.h>
int main()
{
	int n,base,s;
	int a[100],i,k=0;
	scanf("%d %d",&n,&base);
	while(n>0)
	{
		s=n%base;
		a[k++]=s;
		n/=base;
	}
	for(i=k-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	
}
