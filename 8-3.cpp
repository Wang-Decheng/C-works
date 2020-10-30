#include<stdio.h>
#include<math.h>

int cnt = 0;
int p[10];


int main()
{
	int t;
	for(int i=1; i<=6; i++)
	{
		scanf("%d",&t);
		int flag = 1;
		for(int j=2; j*j<=t; j++)
		{
			if(t%j==0)
			{
				flag =0;
				break;
			}
		}
		if(flag)
		{
			cnt++;
			p[cnt]=t;
		}
	}
	if(!cnt)
	{
		printf("NULL");
	}
	for(int i=1;i<=cnt;i++)
	{
		for(int j=i+1;j<=cnt;j++)
		{
			if(p[i]>p[j])
			{
				int temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	for(int i=1;i<=cnt;i++)
	{
		if(i!=1)printf(" ");
		printf("%d",p[i]);
	}
	return 0;
}

