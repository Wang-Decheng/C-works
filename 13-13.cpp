#include<stdio.h>
#include<math.h>
#include<string.h>

int a[1010];
int b[1010];

int read()
{
	int sum=0;
	int sign=1;
	char c=getchar();
	while((c<'0'||c>'9')&&c!='-')c=getchar();
	if(c=='-')
	{
		sign=-1;
		c=getchar();
	}
	while(c>='0'&&c<='9')
	{
		sum*=10;
		sum+=c-'0';
		c=getchar();
	}
	return sum*sign;
}

int gcd(int x,int y)
{
	if(x<y)
	{
		int t=x;
		x=y;
		y=t;
	}
	if(y==0)return x;
	return gcd(y,x%y);
}


int main()
{
	int n;
	n=read();
	for(int i=1; i<=n; i++)
	{
		a[i]=read();
		b[i]=read();
	}
	int d=b[1]*b[2]/(gcd(b[1],b[2]));
	for(int i=3; i<=n; i++)
	{
		d=d*b[i]/gcd(d,b[i]);
	}
	int sum=0;
	for(int i=1; i<=n; i++)
	{
		a[i]*=b[i]/d;
		sum+=a[i];
	}
	if(abs(sum)<d)
	{
		printf("%d/%d",sum,d);
		return 0;
	}
	if(sum%d==0)
	{
		printf("%d",sum/d);
		return 0;
	}
	printf("%d %d/%d",sum/d,sum%d,d);
	return 0;
}

