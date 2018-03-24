#include<stdio.h>
int compare(int a,int key)
{	
	if(a<key)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void print(int *a,int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
int * alternate_sort(int n,int *a)
{
	int i=0,key,pos,j,x=0;
	for(i=0;i<n;i++)
	{
		key=a[i],pos=i;
		for(j=i;j<n;j++)
		{
			if(compare(a[j],key)==x) //toggle greater than and less than
			{
				pos=j;
				key=a[j];
			}
		}
		x=!x;
		a[pos]=a[i];
		a[i]=key;
	}
	print(a,n);
}
int main()
{
	int n=7,a[]={10,2,9,3,20,100,67};
	alternate_sort(n,a);
}

