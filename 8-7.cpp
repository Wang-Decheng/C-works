#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	scanf("%d",&n);
	int n_3=n*n*n;
	int t =  n_3/n;
	int ans[100010];
	if(n%2!=0)
	{
		for(int i=1;i<=(n>>1);i++)
		{
			ans[i]=t+i*2;
			ans[n-i+1]=t-i*2;
		}
		ans[n/2+1]=t;
	}
	if(n%2==0)
	{
		for(int i=1;i<=n/2;i++)
		{
			ans[i]=t+i*2-1;
			ans[n-i+1]=t-i*2+1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(ans[i]>ans[j])
			{
				int temp=ans[i];
				ans[i]=ans[j];
				ans[j]=temp;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(i!=1)printf(" ");
		printf("%d",ans[i]);
	}
	return 0;
}

