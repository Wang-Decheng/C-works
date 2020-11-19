#include<stdio.h>
#include<math.h>
#include<string.h>

int cnt[26];

int main()
{
	char s[1000],t[1000];
	scanf("%s%s",s,t);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]>='a')cnt[s[i]-'a']++;
		else cnt[s[i]-'A']++;
	}
	for(int i=0;i<strlen(t);i++)
	{
		if(t[i]>='a')cnt[t[i]-'a']++;
		else cnt[t[i]-'A']++;
	}
	for(int i=0;i<26;i++)if(cnt[i])printf("%c",i+'A');
	return 0;
}

