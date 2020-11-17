#include<stdio.h>
#include<math.h>
#include<string.h>

char s[1000];
int cnt[200],p[200],t;

int main()
{

	scanf("%s",s);
	cnt[s[0]]++;
	p[s[0]]=1;
	t=s[0];
	for(int i=1; i<strlen(s); i++)
	{
		//printf("##\n");
		cnt[s[i]]++;
		if(!p[s[i]])p[s[i]]=i+1;
		t=cnt[s[i]]>cnt[t]?s[i]:t;
	}
	//for(int i='a'; i<='z'; i++)printf("#%d\n",cnt[i]);
	printf("%c %d %d",t,cnt[t],p[t]-1);
	return 0;
}

