#include<stdio.h>
#include<math.h>

int v[4]={0,1,2,5};
int f[1000000];

int main()
{
	int n;
	scanf("%d",&n);
	n*=100;
	f[0]=1;
	n-=8;
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j-v[i]>=0)
			{
				f[j]+=f[j-v[i]];
			}
		}
	}
	
	printf("%d",f[n]);
	return 0;
}

