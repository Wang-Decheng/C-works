#include<stdio.h>
#include<math.h>
#include<string.h>

char dic[110][110];
int h[110];
int cnt[110];
int hash(char* s)
{
	int ans=0;
	for(int i=0;i<strlen(s);i++)
	{
		ans+=s[i];
		ans%=10000007;
	}
	return ans;
}

int main()
{
	char s[100];
	int l=0;
	while(scanf("%s",s)!=EOF)
	{
		if(strcmp(s,"###")==0)break;
		int t=hash(s);
		int f=1;
		for(int i=1;i<=l;i++)
		{
			if(t==h[i])
			{
				cnt[i]++;
				f=0;
				break;
			}
		}
		if(f)
		{
			l++;
			h[l]=t;
			cnt[l]=1;
			strcpy(dic[l],s);
		}
	}
	printf("%s-%d",dic[1],cnt[1]);
	for(int i=2;i<=l;i++)
	{
		printf(" %s-%d",dic[i],cnt[i]);
	}
	return 0;
}

