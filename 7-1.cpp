#include<stdio.h>
#include<math.h>

int main()
{
	double t;
	while(true)
	{
		scanf("%lf",&t);
		if(abs(t-1000)<1E-5)break;
		printf("0\n");
	}
	printf("%.0lf",sqrt(t));
	return 0;
}

