#include<stdio.h>
#include<math.h>

int isp(int x)
{
	for(int i=2;i*i<=x;i++)
	{
		if(x%i==0)return 0; 
	}
	return 1;
}

int main()
{
	int m,n,cnt=0;
	scanf("%d%d",&m,&n);
	for(int i=m;i<=n;i++)
	{
		if(isp(i))
		{
			cnt++;
			printf("%d ",i);
		}
	}
	printf("%d",cnt);
	return 0;
}

