#include<stdio.h>
#include<math.h>

int a[100];
int d;

int gcd(int a,int b)
{
	if(a<b)
	{
		int t=a;
		a=b;
		b=t;
	}
	return b==0?a:gcd(b,a%b);
}

int main()
{
	int l = 1;
	while(scanf("%d",&a[l]))
	{
		if(a[l])
		{
			l++;
		}
		else
		{
			l--;
			break;
		}
	}
	d=gcd(a[1],a[2]);
	for(int i=3;i<=l;i++)
	{
		d = gcd(d,a[i]);
	}
	printf("%d",d);
	for(int i=1;i<=l;i++)
	{
		printf(" %d",a[i]);
	}
	return 0;
}

