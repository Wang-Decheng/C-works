#include<stdio.h>
#include<math.h>

int main()
{
	double mny,y,r,sum=0;
	scanf("%lf,%lf,%lf",&mny,&y,&r);
	
	printf("%.2lf",mny*(pow((1+r),y)));
	return 0;
}

