#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char s[210];
	gets(s);
	int l=0,r=strlen(s)-1;
	while(s[l]=='*')l++;
	while(s[r]=='*')r--;
	for(int i=0;i<l;i++)printf("*");
	for(int i=l;i<=r;i++)if(s[i]!='*')printf("%c",s[i]);
	for(int i=r+1;i<strlen(s);i++)printf("*");
	return 0;
}

