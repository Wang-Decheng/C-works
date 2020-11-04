#include<stdio.h>
#include<math.h>

int cnt[1000000];

int main()
{
	int n,sum=0,f=1;
	scanf("%d",&n);
	for(int i=2;n!=1&&i<n;i++)
	{
		while(n%i==0)
		{
			if(!f)printf("+");
			f=0;
			sum+=i;
			n/=i; 
			printf("%d",i);;
		}
	}
	if(f)
	{
		printf("0");
		return 0;
	}
	if(n!=1)
	{
		printf("+%d",n);
		sum+=n;
	}
	printf("=%d",sum);
	return 0;
}

