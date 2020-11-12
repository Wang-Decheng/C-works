#include<stdio.h>
#include<math.h>

int b[2000];
int a[2000];
int c[20];

int hash(int x)
{
	return ((19*x-47+x/13)%1007+1007)%1007;
}

int main()
{
	int n,t,l=0,maxn=-9999999;
	scanf("%d",&n); 
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&t);
		int p=hash(t);
		a[p]=t;
		b[p]=1;
		maxn=maxn>p?maxn:p;
	}
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&t);
		int p=hash(t);
		a[p]=t;
		b[p]=b[p]==0?1:-1;
		maxn=maxn>p?maxn:p;
	}
	for(int i=0;i<=maxn;i++)
	{
		if(b[i]==1)
		{
			l++;
			c[l]=a[i];
		}
	}
	for(int i=1;i<=l;i++)
	{
		for(int j=1+i;j<=l;j++)
		{
			if(c[i]>c[j])
			{
				t=c[i];
				c[i]=c[j];
				c[j]=t;
			}
		}
	}
	for(int i=1;i<l;i++)printf("%d ",c[i]);
	printf("%d",c[l]);
	return 0;
}

