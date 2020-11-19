#include<stdio.h>
#include<math.h>
#include<string.h>

int ans[1010];

int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	if(n==0)
	{
		printf("0");
		return 0;
	}
	int l=0;
	while(n>0)
	{
		l++;
		ans[l]=n%k;
		n/=k;
	}
	for(int i=l;i>=1;i--)
	{
		printf("%c",ans[i]<=9?ans[i]+'0':ans[i]-10+'A');
	}
	return 0;
}

