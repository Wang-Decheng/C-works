#include<stdio.h>
#include<math.h>

int main()
{
	int n,m;
	int b[10010]; 
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int t;
		scanf("%d",&t);
		b[t]=1;
	}
	scanf("%d",&m);
	int f=1;
	for(int i=1;i<=m;i++)
	{
		int t;
		scanf("%d",&t);
		if(b[t])
		{
			if(!f)printf(" ");
			f=0;
			printf("%d",t);
		}
		
	}
	return 0;
}

