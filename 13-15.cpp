#include<stdio.h>
#include<math.h>
#include<string.h>

int cnt[4];

int main()
{
	int t;
	while(scanf("%d",&t)!=EOF)
	{
		if(t==-1)break;
		switch(t)
		{
			case 1 :
				cnt[1]++;
				break;
			case 2 :
				cnt[2]++;
				break;
			case 3 :
				cnt[3]++;
				break;
			default :
				cnt[0]++;
		}
	}
	printf("%d %d %d %d\n",cnt[1],cnt[2],cnt[3],cnt[0]);
	return 0;
}

