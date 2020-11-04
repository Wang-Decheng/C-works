#include<stdio.h>
#include<math.h>

int isp(int x)
{
	for(int i=2;i*i<=x;i++)
	{
		if(x%i==0)return 0; 
	}
	return 1;
}

int main()
{
	int n;
	scanf("%d",&n);
	int f=isp(n)+isp(n%10*10+n/10);
	if(f==2)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}

