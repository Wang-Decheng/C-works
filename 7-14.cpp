#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	int sum = 0;
	scanf("%d",&n);
	while(n>0)
	{
		int t=n%10;
		sum+=t*t;
		n/=10;
	}
	printf("%d",sum);
	return 0;
}

