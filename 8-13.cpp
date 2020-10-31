#include<stdio.h>
#include<math.h>

int p[1000000];
int isp[10000000];
int l = 0;
int cnt[1000000];
int first = 1;


int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 2; i <= n; i++)isp[i]=1;
	for(int i = 2; i <= n; i++)
	{
		if(isp[i])
		{
			l++;
			p[l] = i;
			for(int j = 2 * i; j <= n; j+=i)isp[j]=0;
		}
	}
	for(int i=1;i<=l;i++)
	{
		while(n%p[i]==0)
		{
			cnt[i]++;
			n/=p[i];
			
		}
	}
	int sum = 0;
	printf("1");
	for(int i=1;i<=l;i++)
	{
		for(int j=1;j<=cnt[i];j++)
		{ 
			
			
			printf("*%d",p[i]);
		}
	}
	return 0;
}

