#include<stdio.h>
#include<math.h>
#include<string.h>

char s[210];
int cnt[200];

int main()
{
	gets(s);
	for(int i=1;i<strlen(s)-1;i++)
	{
		cnt[s[i]]++;
	}
	printf("%c",s[0]);
	for(int i=127;i>=0;i--)
	{
		for(int j=1;j<=cnt[i];j++)
		{
			printf("%c",i);
		}
	}
	printf("%c",s[strlen(s)-1]);
	return 0;
}

