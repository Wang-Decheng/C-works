#include<stdio.h>
#include<math.h>

int main()
{
	int  n;
	double sum=0;
	int p=2,q=1,t;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		sum+=p*1.0/q*1.0;
		t=p;
		p+=q;
		q=t;
	} 
	printf("%.4lf",sum);
	return 0;
}

