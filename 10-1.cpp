#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char s[10];
	scanf("%s",s);
	int ans=0;
	for(int i=0;i<strlen(s);i++)
	{
		ans*=8;
		ans+=s[i]-'0';
	}
	printf("%d",ans); 
	return 0;
}

