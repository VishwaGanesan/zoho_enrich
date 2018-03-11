#include<stdio.h>
#include<string.h>
sswap(char *c ,char *d)
{
	char temp[100];
	strcpy(temp,d);
	strcpy(d,c);
	strcpy(c,temp);
}
iswap(int *a ,int *b)
{
	int temp;
	temp =*a;
	*a = *b;
	*b = temp;
}
int main()
{
	char s[100][100];
	int i=0,n,a[100],j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
		sscanf(s[i],"%d",&a[i]);    // convert the string to the specified format 
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				sswap(s[i],s[j]);  // swap the string
				iswap(&a[i],&a[j]); // swap integer
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s ",s[i]);
	}
}
