#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int n;
	int a[100],b[100];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(b[i]<b[j])
			{
				int t=b[i];
				b[i]=b[j];
				b[j]=t;
			 } 
		}
	}
	printf("%d %d",a[1],b[1]);
	for(int i=2;i<=n;i++)printf(" %d %d",a[i],b[i]);
	return 0;
}

