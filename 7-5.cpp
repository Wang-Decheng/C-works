#include<stdio.h>
#include<math.h>

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int f = 1;
	for(int i=m;i<=n;i++)
	{
		int t=i*i;
		for(int j=0;;j++)
		{
			int tt=pow(10,j);
			if(tt>t)break;
			if(t%tt==i)
			{
				if(f == 0)
				{
					printf(" ");
				}
				f = 0;
				printf("%d",i);
				break;
			}
		}
	}
	return 0;
}

