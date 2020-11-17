#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char s[220];
	gets(s);
	int f=1;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]!=s[strlen(s)-i-1])
		{
			f=0;
			break;
		}
	}
	if(f)printf("YES");
	else printf("NO");
	return 0;
}

