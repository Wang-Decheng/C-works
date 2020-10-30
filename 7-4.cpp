#include<stdio.h>
#include<math.h>

int a[10];



int main()
{
	char c;
	for(int i=1;i<=4;i++)
	{
		scanf("%c",&c);
		a[i]=c-'0';
		a[i]=(a[i]+5)%10;
	}
	int t;
	t = a[1];
	a[1] = a[4];
	a[4] = t;
	t = a[2];
	a[2] = a[3];
	a[3] = t;
	for(int i=1;i<=4;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}

