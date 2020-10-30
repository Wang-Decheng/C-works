#include<stdio.h>
#include<math.h>

int main()
{
	int n, maxn = -0x3f3f3f3f,cnt =0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int t;
		scanf("%d",&t);
		if(t==maxn)
		{
			cnt++;
		}
		if(t>maxn)
		{
			maxn=t;
			cnt=1;
		}
	}
	printf("%d,%d",maxn,cnt);
	return 0;
}

