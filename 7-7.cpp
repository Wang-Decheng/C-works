#include<stdio.h>

int main()
{
	double h = 100;
	double sum = 0;
	int n;
	scanf("%d",&n);
	sum+=h;
	for(int i = 2;i<=n;i++)
	{
		sum+=h;
		h/=2.0;
	}
	printf("%lf\n%lf",sum,h/2.0);
	return 0; 
 } 
