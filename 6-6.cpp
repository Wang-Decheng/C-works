#include<stdio.h>
#include<math.h> 

int main()
{
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	printf("%g %g", (a+b+c),round((a+b+c)));
	return 0;
}

