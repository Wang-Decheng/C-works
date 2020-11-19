#include<stdio.h>
#include<math.h>
#include<string.h>

void fun(int n,char s[])
{
	int l=0;
	while(n>0)
	{
		s[l]=n%10+'0';
		l++;
		n/=10;
	}
	s[l]='\0';
}

int main()
{
	int n;
	char s[20];
	scanf("%d",&n);
	fun(n,s);
	printf("%s",s);
	return 0;
}

