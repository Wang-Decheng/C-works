#include<stdio.h>

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int cnt=0;
	for(int i=m+1;cnt<n;i++)
	{
		int flag=1;
		for(int j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
		}
		if(flag)
		{
			if(cnt)printf(" ");
			cnt++;
			printf("%d",i);
		}
	}
}
