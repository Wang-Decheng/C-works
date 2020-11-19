#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char s[10000];
	gets(s);
	for(int i=0;i<strlen(s)-2;i++)
	{
		if(s[i]==s[strlen(s)-1])
		{
			printf("%d",i);
			return 0;
		}
	}
	printf("-1");
	return 0;
}

