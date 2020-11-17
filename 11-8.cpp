#include<stdio.h>
#include<math.h>
#include<string.h>

char* mystrrev(char string[])
{
	char t[200];
	for(int i=0;i<strlen(string);i++)
	{
		char t=string[strlen(string)-i-1];
		string[strlen(string)-i-1]=string[i];
		string[i]=t;
	}
	return &string[0];
} 

int main()
{
	char s[200];
	scanf("%s",s);
	printf("%s",mystrrev(s));
	return 0;
}

