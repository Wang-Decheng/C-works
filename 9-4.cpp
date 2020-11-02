#include<stdio.h>
#include<math.h>


int main()
{
	int n;
	int a;
	scanf("%d",&n);
	int p=1,t,b=1,e=1;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a==t)
		{
			if(i-p>e-b)
			{
				b=p;
				e=i;
			}
		}
		else
		{
			p=i;
			t=a;
		}
	}
	printf("%d,%d",b,e);
	return 0;
}

