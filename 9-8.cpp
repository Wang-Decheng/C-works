#include<stdio.h>
#include<math.h>

int main()
{
	long long n;
	scanf("%lld",&n);
	int sum=0;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	printf("%d",sum);
	return 0;
}

