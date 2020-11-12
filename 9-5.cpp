#include<stdio.h>
#include<math.h>

int cnt[200];

int main()
{
	char s[1000];
	gets(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]-'a'>=0&&s[i]-'a'<26)
		{
			cnt[s[i]-'a']++;
		}
		if(s[i]-'A'>=0&&s[i]-'A'<26)
		{
			cnt[s[i]-'A']++;
		}
	}
	for(int i=0;i<26;i++)
	{
		printf("%d",cnt[i]);
		if(i!=25)printf(",");
	}
	return 0;
}
