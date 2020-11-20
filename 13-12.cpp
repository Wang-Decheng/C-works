#include<stdio.h>
#include<math.h>
#include<string.h>

int b[6010];

int main()
{
	int n;
	scanf("%d",&n);
	int r=n,p=2;
	while(r>3)
	{
		int cnt=0;
		for(int i=1;i<=n&&r>3;i++)
		{
			if(!b[i])
			{
				cnt++;
				if(cnt==p)
				{
					b[i]=1;
					cnt=0;
					r--;
				}
			}
		}
		p=p==2?3:2;
	}
	int f=1;
	for(int i=1;i<=n;i++)
	{
		if(!b[i])
		{
			if(!f)printf(" ");
			f=0;
			printf("%d",i);
		}
	}
	return 0;
}

