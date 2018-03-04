#include<stdio.h>
#include<stdlib.h>
void main()
{
	int  n;
	int a[100],table[100],count[100]={0}; //table maintain the distinct entries
	scanf("%d",&n);                       //count maintain the details of no of occurance
	int k=0,i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=k;j>=0;j--)
		{
			if(table[j]==a[i])      
			{
				break;
			}
		}
		if(j<0)
		{
			count[k]++;
			table[k++]=a[i];
		}
		else{
			count[j]++;
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d --> %d\n",table[i],count[i]);
	}
}
