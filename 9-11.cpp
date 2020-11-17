#include<stdio.h>
#include<math.h>

int b[1000000];

int main()
{
	int n,m,t,l=0,maxn=-9999999;
	scanf("%d",&n); 
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&t);
		b[t+10000]++;
		maxn=maxn>t?maxn:t;
	}
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d",&t);
		b[t+10000]++;
		maxn=maxn>t?maxn:t;
	}
	for(int i=0;i<=maxn+10000;i++)
	{
		if(b[i]==1)
		{
			l++;
			a[l]=i-10000;
		}
	}
	for(int i=1;i<=l;i++)
	{
		for(int j=1+i;j<=l;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(int i=1;i<l;i++)printf("%d ",a[i]);
	printf("%d",a[l]);
	return 0;
}

