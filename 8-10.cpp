#include<stdio.h>
#include<math.h>

int main()
{
	int x,y,a,b;
	scanf("%d%d",&x,&y);
	a=(x+y)/2;
	b=(x-y)/2;
	int sa=a>0?1:-1;
	int sb=b>0?1:-1;
	a*=sa;
	b*=sb;
	int aa=0;
	int bb=0;
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
	printf("%d %d",aa*sa+bb*sb,aa*sa-bb*sb);
	return 0;
}

