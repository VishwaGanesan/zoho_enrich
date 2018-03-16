#include<stdio.h>
void main()
{
	int n,a[100][100]={0};
	int count,ip,jp,i_t=1,i,j;
	scanf("%d",&n);
	ip=n/2,jp=ip,count=n*n;
	a[--ip][jp]=1;
	while(i_t<=count)
	{
		jp++,ip--;
	check:if(jp>=n)
		{
			jp=0;
		}
		else if(ip<0)
		{
			ip=n-1;
		}
		if(a[ip][jp]!=0)
		{
			ip--,jp--;
			goto check;
		}
		a[ip][jp]=++i_t;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n--------------==========-------------------\n");
	}
	
}
