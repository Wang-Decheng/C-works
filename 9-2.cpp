#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	char c[1000];
	gets(c);
	for(int i=0;i<strlen(c);i++)
	{
		if(c[i]!=' ')
		printf("%c",c[i]);
	}
	return 0;
}

