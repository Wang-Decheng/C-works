#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char s[200],a[100],b[100];
	gets(s);
	int l=strlen(s);
	for(int i=1; i<=l/2; i++)
	{
		for(int j=i+1; j<=l/2; j++)
		{
			int a=2*(i-1);
			int b=2*(j-1);
			if(s[a]>s[b])
			{
				char t=s[a];
				s[a]=s[b];
				s[b]=t;
			}
		}
	}
	printf("%s",s);
	return 0;
}

