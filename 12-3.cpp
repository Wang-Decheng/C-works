#include<stdio.h>
#include<math.h>
#include<string.h>

char s[100];
int cnt[26];
int r[26];

int main()
{

	gets(s);
	for(int i=0; i<strlen(s); i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			cnt[s[i]-'A']++;
		}
		if(s[i]>='a'&&s[i]<='z')
		{
			cnt[s[i]-'a']++;
		}
	}
	for(int i=0;i<26;i++)r[i]=i;
	for(int i=0; i<26; i++)
	{
		for(int j=i+1; j<26; j++)
		{
			if(cnt[r[i]]<cnt[r[j]]||(cnt[r[i]]==cnt[r[j]]&&r[i]>r[j]))
			{
				int t=r[i];
				r[i]=r[j];
				r[j]=t;
			}
		}
	}
	for(int i=0; i<26; i++)
	{
		int t=r[i];
		if(i!=0)printf(" ");
		printf("%c-%d",t+'A',cnt[t]);
	}
	return 0;
}

