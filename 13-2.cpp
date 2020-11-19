#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int m,n;
	scanf("%d%d",&n,&m);
	for(int i=1;i<n;i++)printf("%d,",i);
	for(int i=m+1;i<=15;i++)printf("%d,",i);
	for(int i=n;i<m;i++)printf("%d,",i);
	printf("%d",m);
	return 0;
}

