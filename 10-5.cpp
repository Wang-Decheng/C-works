#include<stdio.h>
#include<math.h>

int b[10];

int main()
{
	int m,n,cnt=0;
	scanf("%d%d",&m,&n);
	for(int i=m;i<=n;i++)
	{
		if(i%2==0&&i%3==0&&i%5==0&&i%7==0)
		{
			for(int j=0;j<=9;j++)b[j]=0;
			int t=i,f=1;
			while(t>0)
			{
				if(b[t%10])
				{
					f=0;
					break;
				}
				b[t%10]=1;
				t/=10;
			}
			if(f==1)
			{
				if(cnt)
				{
					printf(" ");	
				}
				printf("%d",i);
				cnt++;
			}
		}
	}
	if(!cnt)printf("-1");
	return 0;
}

