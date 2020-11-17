#include<stdio.h>
#include<math.h>
#include<string.h>

int cnt[26];
char s[100];

int main()
{

	gets(s);
	for(int i=0; i<strlen(s); i++)cnt[s[i]-'a']++;
	int f=0;
	for(int i=0; i<26; i++)
	{
		for(int j=1; j<=cnt[i]; j++)
		{
			if(f)printf(" ");
			printf("%c",i+'a');
			f=1;
		}
	}
	return 0;
}

