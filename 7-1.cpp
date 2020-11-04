#include<stdio.h>
#include<math.h>

int main()
{
	long long t;
	while(1)
	{
		scanf("%lld",&t);
		if(t<=1000)break;
		printf("0\n");
	}
	printf("%lld",(long long)(sqrt(t*1.0)+0.5));
	return 0;
}

