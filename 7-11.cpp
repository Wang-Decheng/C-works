#include<stdio.h>
#include<math.h>

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=m;i<=n;i++)
	{
		if(i%7==0)
		{
			printf("%d��7�ı���\n",i);
		}
		int t = i;
		while(t>0)
		{
			if(t%10 == 7)
			{
				printf("%d�Ǵ�7����\n",i);
				break;
			}
			t/=10;
		}
	}
	return 0;
}

