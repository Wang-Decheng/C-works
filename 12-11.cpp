#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char s[100];
	gets(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]>='a'&&s[i]<='z')printf("%c",s[i]);
	}
	return 0;
}

