#include<stdio.h>

int main()
{
	int a,b ;
	scanf("%d%d",&a,&b);
	printf("%d",(a*a+b*b)/100>0?(a*a+b*b)/100:a*a+b*b);
}
