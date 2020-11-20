#include<stdio.h>
#include<math.h>
#include<string.h>

int b[101];

int main()
{
	int n;
	scanf("%d",&n);
	int p=1,cnt=0,r=n;
	while(r>1)
	{
		while(b[p])p++;
		if(p==n+1)p=1;
		while(b[p])p++;
		cnt++;
		if(cnt==3)
		{
			b[p]=1;
			cnt=0;
			r--;
		}
		p++;
	}
	for(int i=1;i<=n;i++)
	{
		if(!b[i])printf("%d",i);
	}
	return 0;
}

