#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000],ans[1000],count[30],c;
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
		ans[k]=c;
		ans[k+1]='\0';
		if(counter==1)
		{
			k++;
		}
		else
		{
			sprintf(count,"%d",counter); //convert integer to string
			strcat(ans,count);
			k=k+strlen(count)+1;
		}	
	}
	printf("%s ",ans);
}
