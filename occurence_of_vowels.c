#include<stdio.h>
int main()
{
	int a[123]={0},i;
	char s[1000],c[]="aeiou";
	scanf("%[^\n]",s);
	for(i=0;s[i]!='\0';i++)
	{
		a[tolower(s[i])]++;       
	}
	for(i=0;c[i]!='\0';i++)
	{
		if(a[c[i]]!=0)
		{
			printf("%c --> %d\n",c[i],a[c[i]]);
		}
	}
}
