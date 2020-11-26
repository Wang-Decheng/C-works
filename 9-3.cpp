#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int n,m;
	double a[10010],b[10010];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lf",&a[i]);
	}
	double t;
	int f=1;
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		scanf("%lf",&t);
		for(int j=1;j<=n;j++)
		{
			if(abs(t-a[j])<1e-5)
			{
				if(!f)printf(" ");
				f=0;
				printf("%g",t);
			}
		}
	}
	return 0;
}

