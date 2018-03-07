#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char s[100][100];
	char temp[100];
	scanf("%d",&n);
	int i=0,j;
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(strcmp(s[i],s[j])>0)
			{
				strcpy(temp,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],temp);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s ",s[i]);
	}
}
