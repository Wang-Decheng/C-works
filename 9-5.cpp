#include<stdio.h>
#include<math.h>

int cnt[200];

int main()
{
	char c;
	while(scanf("%c",&c)!=EOF)
	{
		if(c-'a'>=0&&c-'a'<26)
		{
			cnt[c-'a']++;
		}
		if(c-'A'>=0&&c-'A'<26)
		{
			cnt[c-'A']++;
		}
	}
	for(int i=0;i<26;i++)
	{
		printf("%d",cnt[i]);
		if(i!=25)printf(",");
	}
	return 0;
}
