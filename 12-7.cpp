#include<stdio.h>
#include<math.h>
#include<string.h>

char s[1010];
int n=0;
int a[1010];

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

	scanf("%s",s);
	int t=0;
	for(int i=0; i<strlen(s); i++)
	{
		if(s[i]=='5')
		{
			n++;
			a[n]=t;
			t=0;
			continue;
		}
		t*=10;
		t+=s[i]-'0';
	}
	qsort(1,n);
	printf("%d",a[1]);
	for(int i=2;i<=n;i++)printf(" %d",a[i]);
	return 0;
}

