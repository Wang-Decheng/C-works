#include<stdio.h>
#include<math.h>
#include<string.h>
void delchar(char *s,char c)
{
	char t[100];
	int l=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]!=c)
		{
			t[l]=s[i];
			l++;
		}
	}
	strcpy(s,t);
}

int main()
{
	char str[1000],ch;
	scanf("%s\n%c",str,&ch);
	delchar(str,ch);
	printf("%s",str);
	return 0;
}

