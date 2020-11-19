#include<stdio.h>
#include<math.h>
#include<string.h>

int n,k;
int a[20]={1,2,3,4,5,6,7,8,9,10};
int b[10];

int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",&b[i]);
	scanf("%d",&k);
	for(int i=9;i>=k;i--)a[i+n]=a[i];
	for(int i=1;i<=n;i++)a[k+i-1]=b[i];
	printf("%d",a[0]);
	for(int i=1;i<=n+9;i++)printf(" %d",a[i]);
	return 0;
}

