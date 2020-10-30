#include<stdio.h>
#include<math.h>

int p[100000];
int isp[1000000];
int l = 0;
int cnt[100000];
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
	if(isp[n])
	{
		printf("0");
		return 0;
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
	for(int i=1;i<=l;i++)
	{
		for(int j=1;j<=cnt[i];j++)
		{ 
			sum+=p[i];
			if(!first)
			{
				printf("+");
			}
			first = 0;
			printf("%d",p[i]);
		}
	}
	printf("=%d",sum);
	return 0;
}

