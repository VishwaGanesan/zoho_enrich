#include<stdio.h>
int main(){
	int n,i,j,k,up=1,mp=0;
	float b[30][30],ele,ans=1;                             //it will work for 0 in future update
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%f",&b[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=up;j<n;j++)
		{ 
			ele=b[j][i]/b[mp][mp];
			for(k=0;k<n;k++)
			{
				b[j][k]=b[j][k]-(b[i][k]*ele);
			}
		}
		up++;
		mp++;
	}
	for(i=0;i<n;i++)
	{
		ans*=b[i][i];
	}
	printf("%0.f",ans);
}
