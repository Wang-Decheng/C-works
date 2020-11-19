#include<stdio.h>
#include<math.h>
#include<string.h>

int a[1000];

void BubbleSort(int a[],int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}

void SelectionSort(int a[],int n)
{
	for(int i=1;i<=n;i++)
	{
		int maxn=a[i];
		int p=i;
		for(int j=i+1;j<=n;j++)
		{
			if(a[j]>maxn)
			{
				maxn=a[j];
				p=j;
			} 
		}
		int t=a[p];
		a[p]=a[i];
		a[i]=t;
	}
}


int main()
{
	for(int i=1;i<=10;i++)scanf("%d",&a[i]);
	BubbleSort(a,10);
	printf("%d",a[1]);
	for(int i=2;i<=10;i++)printf(" %d",a[i]);
	SelectionSort(a,10);
	for(int i=1;i<=10;i++)printf(" %d",a[i]);
	return 0;
}

