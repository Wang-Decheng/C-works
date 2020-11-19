#include<stdio.h>
#include<math.h>
#include<string.h>

int f[10010];

int fun(int x)
{
	if(x<0)return -1;
	if(x>=0&&x<=4)return 1;	
	if(f[x]!=-98765432)return f[x];
	if(x>4&&!x&1)f[x]=fun(x-1)+fun(x-3);
	if(x>4&&x&1)f[x]=fun(x-2)+fun(x-4);
	return f[x];
}

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)f[i]=-98765432;
	printf("%d",fun(n));
	return 0;
}

