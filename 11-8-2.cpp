#include<stdio.h>
#include<math.h>
#include<string.h>

char* op(char s[])
{
	char a[200];
	for(int i=0;i<strlen(s);i++)
	{
		a[i]=s[strlen(s)-i-1];
	}
	a[strlen(s)]='\0';
	return a; 
}

int main()
{
	char s[200];
	gets(s);
	char* p=op(s);
	//&p=op(s); 
	//for(int i=0;i<=n;i++)
	printf("%s",*p);
	return 0;
}

