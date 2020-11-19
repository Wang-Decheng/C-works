#include<stdio.h>
#include<math.h>
#include<string.h>


char s[100];
int cnt[26];

int main()
{

	gets(s);
	for(int i=0; i<strlen(s); i++)
	{
		if(s[i]>='a'&&s[i]<='z')cnt[s[i]-'a']++;
	}
	for(int i=0; i<26; i++)
	{
		for(int j=1; j<=cnt[i]; j++)printf("%c",i+'a');
	}
	return 0;
}

