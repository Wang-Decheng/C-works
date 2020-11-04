#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	char ch[300];
	scanf("%s",ch);
	int cnt=0,f=1;
	for(int i=0;i<strlen(ch);i++)
	{
		if(ch[i]=='*'&&f)
		{
			cnt++;
			continue;
		}
		f=0;
		printf("%c",ch[i]);
	}
	for(int i=1;i<=cnt;i++)printf("*");
	return 0;
}

