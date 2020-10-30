#include<stdio.h>
#include<math.h>

int main()
{
	int t,p=0,sum=0;
	while(scanf("%d",&t))
	{
		if(t==0)break;
		sum+=(t-p>0?(t-p)*6:(p-t)*4)+5;
		p=t;
	}
	printf("%d",sum);
	return 0;
}

