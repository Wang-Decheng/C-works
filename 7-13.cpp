#include<stdio.h>
#include<math.h>

int main()
{
	int cnt =0;
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=m;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			for(int k=j+1;k<=n;k++)
			{
				if(i*i+j*j==k*k)
				{
					cnt++;
				}
			}
		}
	}
	printf("%d",cnt);
	return 0;
}

