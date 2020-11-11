#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	int f=1;
	for(int i=2; i*i<=n; i++)
	{
		if(n%i==0)
		{
			f=0;
			break;
		}
	}
	if(f)printf("YES");
	else printf("NO");
	return 0;
}

