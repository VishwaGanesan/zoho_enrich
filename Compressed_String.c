#include<stdio.h>
int main()
{
	char s[1000],c,ans[1000];
	int count[1000];
	scanf("%s",s);
	int i=0,counter=0,k=0;
	while(s[i]!='\0')
	{
		c=s[i],counter=0;
		while(s[i]!='\0' && c==s[i])
		{
			i++;
			counter++;
		}
		ans[k]=c,count[k]=counter;
		k++;
	}
	for(i=0;i<k;i++)
	{
		printf("%c%d",ans[i],count[i]);
	}
}
