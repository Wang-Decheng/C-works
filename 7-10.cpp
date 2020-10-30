#include<stdio.h>
#include<math.h>

int main()
{
	int a,n,t;
	int sum = 0;
	scanf("%d%d",&a,&n);
	t=0;
	for(int i=1;i<=n;i++)
	{
		if(i!=1)printf("+");
		t+=a;
		printf("%d",t);
		sum+=t;
		t*=10;
	}
	printf("=%d",sum);
	return 0;
}

