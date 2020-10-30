#include<stdio.h>
#include<math.h>

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int f = 1;
	for(int i=m;i<=n;i++)
	{
		int t =i;
		int t1 = t%10;
		t/=10;
		int t2 = t%10;
		t/=10;
		int t3 = t;
		if(i == t1*t1*t1+t2*t2*t2+t3*t3*t3)
		{
			if(!f)printf(" ");
			printf("%d",i);
			f =0;
		}
	}
  	if(f)printf("-1");
	return 0;
}

