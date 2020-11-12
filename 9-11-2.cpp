#include<stdio.h>
#include<math.h>

int a[20],b[20],c[20],l=0;

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&b[i]);
	}
	c[0]=0xffff;
	for(int i=1;i<=n;i++)
	{
		int f=1;
		for(int j=1;j<=n;j++)
		{
			if(a[i]==b[j])
			{
				f=0;
				break;
			}
		}
		if(f)
		{
			l++;
			c[l]=a[i];
		}
	}
	for(int i=1;i<=n;i++)
	{
		int f=1;
		for(int j=1;j<=n;j++)
		{
			if(b[i]==a[j])
			{
				f=0;
				break;
			}
		}
		if(f)
		{
			l++;
			c[l]=b[i];
		}
	}
	for(int i=1;i<=l;i++)
	{
		for(int j=i+1;j<=l;j++)
		{
			if(c[i]>c[j])
			{
				int t=c[i];
				c[i]=c[j];
				c[j]=t;
			}
		}
	}
	for(int i=1;i<l;i++)if(c[i]!=c[i-1])printf("%d ",c[i]);
	if(c[l]!=c[l-1])printf("%d",c[l]);
	/*for(int i=1;i<l;i++)printf("%d ",c[i]);
	printf("%lld",c[l]);*/
}

