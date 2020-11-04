#include<stdio.h>


int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	if(m%2==0)m++;
	int cnt=0;
	for(int i=m;i<=n;i++)
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
			for(int j=2;j*j<=i+2;j++)
			{
				if((i+2)%j==0)
				{
					flag=0;
					break;
				}
			}
			if(flag)
			{
				cnt++;
				//printf("#%d %d\n",i,i+2);
			}
		}
	}
	printf("%d",cnt);
}
