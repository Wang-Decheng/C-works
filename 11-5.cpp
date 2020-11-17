#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char s[200],c;
	int f=1;
	gets(s);
	scanf("%c",&c);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==c)f=0; 
	}
	if(f)
	{
		printf("NotFound");
		return 0;
	}
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]!=c)printf("%c",s[i]);
	}
	return 0;
}

