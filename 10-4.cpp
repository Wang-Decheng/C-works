#include<stdio.h>
#include<math.h>

int ispalindrome(int n)
{
	int s,t;
	s=n/1000;
	t=n%10;
	if(s!=t)return 0;
	s=n/100%10;
	t=n/10%10;
	if(s!=t)return 0;
	return 1;
}



int main()
{
	int n,first=1;
	scanf("%d",&n);
	for(int i=1000;i<=n;i++)
	{
		if(ispalindrome(i))
		{
			if(!first)printf(" ");
			first=0;
			printf("%d",i);
		}
	}
	return 0;
}

