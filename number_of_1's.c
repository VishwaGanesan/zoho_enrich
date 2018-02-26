include<stdio.h>
int main()
{
	int n;
	unsigned int count = 0;
    scanf("%d",&n);
    while (n)
    {
      n &= (n-1) ;
      count++;
    }
    printf("%d",count);
    return 0;
}
