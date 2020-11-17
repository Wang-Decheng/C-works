#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char s[200];
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]<='Z')printf("%c",(s[i]-'A'+3)%26+'A');
		else printf("%c",(s[i]-'a'+3)%26+'a');
	}
	return 0;
}

