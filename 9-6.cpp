#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	char ch[100];
	scanf("%s",ch);
	int base = 1;
	int ans = 0;
	for(int i=strlen(ch)-1;i>=0;i--)
	{
		if(ch[i]=='1')
		{
			ans+=base;
		}
		base<<=1;
	}
	printf("%d",ans);
	return 0;
}

