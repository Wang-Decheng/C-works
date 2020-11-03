#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int c[100];
	n>>=1;
	printf("%d ",n);
	int t=0;
	while(n>0)
	{
		t++;
		c[t]=n%10;
		n/=10;
	}
	for(int i=t;i>=1;i--)
	{
		printf("%c",c[i]+'a');
	}
}
