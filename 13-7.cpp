#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int n,l=0;
	int num[30];
	scanf("%d",&n);
	int t=n*3;
	printf("%d,",t);
	while(t>0)
	{
		l++;
		num[l]=t%10;
		t/=10;
	}
	for(int i=1;i<=l;i++)
	{
		for(int j=i+1;j<=l;j++)
		{
			if(num[i]>num[j])
			{
				int tt=num[i];
				num[i]=num[j];
				num[j]=tt;
			}
		}
	}
	for(int i=l;i>=1;i--)printf("%d",num[i]);
	return 0;
}

