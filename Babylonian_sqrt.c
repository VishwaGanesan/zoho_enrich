#include<stdio.h>
double sqart(int n)
{
	int start=0,end=n;
	double sq_median,median=(end-start)/2;
	while(start<=end)
	{
		sq_median=median*median;
		if(sq_median==n)
		{
			return median;
		}
		else if(sq_median>n)
		{
			end=median-1;
		}
		else
		{
			start=median+1;
		}
		median=(start+end)/2;
	}
}
int main()
{
	long int n;
	scanf("%ld",&n);
	printf("%.2lf\n",sqart(n));
}
