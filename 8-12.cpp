#include<stdio.h>
#include<math.h>

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
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c); 
	int d1=gcd(a,b);
	d1=gcd(d1,c);
	int d2=a*b/gcd(a,b);
	d2=d2*c/gcd(d2,c); 
	printf("%d %d",d1,d2);
	return 0;
}

