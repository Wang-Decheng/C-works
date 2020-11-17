#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char s[200];
	gets(s);
	for(int i=1;i<=strlen(s);i++)
	{
		if(i!=1)printf(" ");
		for(int j=strlen(s)-i;j<=strlen(s)-1;j++)
		{
			printf("%c",s[j]);
		}
	}
	return 0;
}

