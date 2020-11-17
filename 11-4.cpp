#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char s[200],t[200];
	gets(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(i&1)t[i]=s[strlen(s)-i-strlen(s)%2];
		else t[i]=s[i];
	}
	for(int i=0;i<strlen(s);i++)
	{
		if(t[i]!=' ')printf("%c",t[i]);
	}
	return 0;
}

