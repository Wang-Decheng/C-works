#include<stdio.h>
#include<math.h>

int main()
{
	int  n;
	double sum=0;
	long long p=2,q=1,t;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i%2==1)sum+=p*1.0/q*1.0;
		else sum-=p*1.0/q*1.0;
		t=p;
		p+=q;
		q=t;
	} 
	printf("%lf",sum);
	return 0;
}

