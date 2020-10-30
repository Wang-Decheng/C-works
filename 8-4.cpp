#include<stdio.h>
#include<math.h>

int a[100000];

int ga(int p)
{
	//return a[p]?a[p]:a[p]=p*(p+1)/2;
	if(a[p]==0)a[p]=p*(p+1)/2;
	return a[p];
} 

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;ga(i)<=n;i++)
	{
		for(int j=i+1;ga(j)-ga(i)<=n;j++)
		{
			if(ga(j)-ga(i)==n)
			{
				printf("%d=%d",n,i+1);
				for(int k = i+2;k<=j;k++)
				{
					printf("+%d",k);
				}
				printf("\n");
			}
		}
	}
	return 0;
}

