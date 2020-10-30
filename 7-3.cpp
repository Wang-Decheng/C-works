#include<stdio.h>
#include<math.h>

int cnt[5]={0,0,0,0,0};

int main()
{
	int t;
	while(1)
	{
		scanf("%d",&t);
		if(t==-1)break;
		cnt[t]++;
	}
	for(int i=0;i<=3;i++)
	{
		printf("%d ",cnt[i]);
	}
	printf("%d",cnt[4]);
	return 0;
}

