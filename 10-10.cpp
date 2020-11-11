#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char s[250];
	scanf("%s",s);
	int l=0,r=strlen(s)-1;
	while(s[l]=='*')l++;
	while(s[r]=='*')r--;
	for(int i=l;i<=r;i++)printf("%c",s[i]);
}

