#include<stdio.h>
#include<math.h>

unsigned long long
int main()
{
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	if((a<b+c)&&(b<a+c)&&(c<b+a))
	{
		printf("YES");
	}
	else
	{
		printf("ERROR DATA");
	}
	return 0;
}

