#include<stdio.h>
int main()
{
	int a[200]={0},i;
	char s[100],c[]="AEIOUaeiou";
	scanf("%[^\n]",s);
	for(i=0;s[i]!='\0';i++)
	{
		a[s[i]]++;
	}
	for(i=0;c[i]!='\0';i++)
	{
		if(a[c[i]]!=0)
		{
			printf("%c --> %d\n",c[i],a[c[i]]);
		}
	}
}
