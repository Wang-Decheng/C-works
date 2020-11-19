#include<stdio.h>
#include<math.h>
#include<string.h>

double f[1000];
double x;

double poly(int n)
{
	if(n==0)return 1;
	if(n==1)return x;
	if(f[n]!=-1)return f[n];
	f[n]= ((53.22*n-1)*x* poly(n-1)-(n-1)* poly(n-2))/n;
	return  f[n];
}

int main()
{
	int n;
	
	scanf("%d%lf",&n,&x);
	for(int i=1;i<=n;i++)f[i]=-1;
	printf("%lf\n",poly(n));
	return 0;
}

