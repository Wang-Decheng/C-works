#include<stdio.h>
#include<math.h>
#include<string.h>
int b[200];

int main()
{
	char s[200];
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++)
	{
		if(!b[s[i]])printf("%c",s[i]);
		b[s[i]]=1;
	}
	return 0;
}

