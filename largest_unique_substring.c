#include<stdio.h>
#include<string.h>
void make_it_null(int *a)
{
	int i;
	for(i=0;i<26;i++)
	{
		a[i]=0;
	}
}
char* unique(char *str,char *ans)
{
	int a[26],l,k=0;
	int s,e,t,count,max=0,i=0;
	int start_ind=0,end_ind=0;
	l=strlen(str);
	while(i<l)
	{
		make_it_null(a);
		t=tolower(str[i])-'a',s=i,count=0;
		while(a[t]==0)
		{
			count++;
			i++;
			a[t]=1;
			t=tolower(str[i])-'a';
		}
		if(count>=max)
		{
			start_ind=s;
			end_ind=i;
			max=count;
		}
	}
	for(i=start_ind;i<end_ind;i++)
	{
		ans[k++]=str[i];
	}
	return(ans);
}
int main()
{
	char str[1000],ans[1000];
	scanf("%s",str);
	printf("%s ",unique(str,ans));
}
