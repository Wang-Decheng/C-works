#include<stdio.h>
#include<math.h>
#include<string.h>
void delchar(char *s,char c)
{
	/*char t[100];
	strcpy(t,s);
	int l=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]!=c)
		{
			t[l]=s[i];
			l++;
		}
	}
	strncpy(s,t,l);*/
	int l=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]!=c)
		{
			s[l]=s[i];
			l++;
		}
	}
	s[l]='\0';
}

int main()
{
	char str[1000],ch;
	gets(str);
	scanf("%c",&ch);
	delchar(str,ch);
	printf("%s",str);
	return 0;
}

