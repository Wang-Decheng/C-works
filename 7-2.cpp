#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	
	for(int i=1;i<=a;i++)
	{
		printf("*");
	}
	printf("\n");
	for(int i=1;i<=b;i++)
	{
		printf("*");
	}
	printf("\n");
	for(int i=1;i<=c;i++)
	{
		printf("*");
	}
	printf("\n");
	return 0;
}

