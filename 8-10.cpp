#include<stdio.h>
#include<math.h>

int main()
{
	long long x,y,a,b;
	scanf("%lld%lld",&x,&y);
	a=(x+y)/2;
	b=(x-y)/2;
	long long sa=a>0?1:-1;
	long long sb=b>0?1:-1;
	a*=sa;
	b*=sb;
	long long aa=0;
	long long bb=0;
	while(a>0)
	{
		aa*=10;
		aa+=a%10;
		a/=10;
	}
	while(b>0)
	{
		bb*=10;
		bb+=b%10;
		b/=10;
	}
	printf("%lld %lld",aa*sa+bb*sb,aa*sa-bb*sb);
	return 0;
}

