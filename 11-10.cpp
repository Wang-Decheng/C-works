#include<stdio.h>
#include<math.h>
#include<string.h>

double fun(int a[],int n,int *max,int *min)
{
	double sum=0;
	*max=-99999999;
	*min=99999999;
	for(int i=1;i<=n;i++)
	{
		sum+=a[i];
		*max=*max>a[i]?*max:a[i];
		*min=*min<a[i]?*min:a[i];
	}
	return sum/n;
}

int main()
{
	int n,a[200];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	int maxn,minn;
	double avr = fun(a,n,&maxn,&minn);
	printf("%d %d %.6lf",maxn,minn,avr);
	return 0;
}

