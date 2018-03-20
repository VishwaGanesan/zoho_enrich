#include<stdio.h>
long int conversion(int n,int base)
{
	int a[100],i,k=0,s;
	long int ans=0;
	while(n>0)
	{
		s=n%base;
		a[k++]=s;
		n/=base;
	}
	for(i=k-1;i>=0;i--)
	{
		ans=(ans*10)+a[i];
	} 
	return ans;
}
int main()
{
	int n,base;
	scanf("%d %d",&n,&base);
	printf("%ld ",conversion(n,base));
}
