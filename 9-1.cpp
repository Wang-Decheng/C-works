#include<stdio.h>
#include<math.h>

int main()
{
	int a[210];
	int m,n;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		a[i+100]=a[i];
	}
	for(int i=1;i<=n;i++)
	{
		a[(i+m)%n]=a[i+100];
	}
	a[n]=a[0];
	for(int i=1;i<=n;i++)
	{
		if(i!=1)printf(" ");
		printf("%d",a[i]);		
	}
	return 0;
}

