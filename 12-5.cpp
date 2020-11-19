#include<stdio.h>
#include<math.h>
#include<string.h>

int n;
int a[1000];

void qsort(int l,int r)
{
	int i=l,j=r,m=a[(l+r)/2];
	while(i<=j)
	{
		while(a[i]<m)i++;
		while(a[j]>m)j--;
		if(i<=j)
		{
			int t=a[i];
			a[i]=a[j];
			a[j]=t;
			i++;
			j--;
		}
	}
	if(l<j)qsort(l,j);
	if(i<r)qsort(i,r);
}


int main()
{

	scanf("%d",&n);
	for(int i=1; i<=n; i++)scanf("%d",&a[i]);
	qsort(1,n);
	for(int i=1;i<=n;i++)
	{
		if(i==1)printf("%d",a[1]);
		else if(i==n/2+1)printf(" %d",a[n]);
		else if(i==n)printf(" %d",a[n/2+1]);
		else printf(" 0");
	}
	return 0;
}

