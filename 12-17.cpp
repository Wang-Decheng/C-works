#include<stdio.h>
#include<math.h>
#include<string.h>

int n;
int a[1000],b[1000];

int main()
{
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		int t;
		scanf("%d",&t);
		if(t&1)
		{
			a[0]++;
			a[a[0]]=t;
		}
		else
		{
			b[0]++;
			b[b[0]]=t;
		}
	}
	for(int i=1; i<=a[0]; i++)
	{
		for(int j=i+1; j<=a[0]; j++)
		{
			if(a[i]<a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(int i=1; i<=b[0]; i++)
	{
		for(int j=i+1; j<=b[0]; j++)
		{
			if(b[i]>b[j])
			{
				int t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
	printf("%d",b[1]);
	for(int i=2;i<=b[0];i++)printf(" %d",b[i]);
	for(int i=1;i<=a[0];i++)printf(" %d",a[i]);
	return 0;
}

