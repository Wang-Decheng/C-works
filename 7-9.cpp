#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	double s=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i&1)
		{
			s+=1.0/(2*i-1);
		}
		else
		{
			s-=1.0/(2*i-1);
		}
	}
	printf("%lf",s);
	return 0;
}

