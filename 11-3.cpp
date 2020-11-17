#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char s[200],t[200];
	gets(s);
	int p=0;
	for(int i=strlen(s)-1;i>=0;i--)
	{
		t[p]=s[i];
		p++;
		if(p%4==3&&i!=0)
		{
			t[p]=',';
			p++;
		}
	}
	for(int i=p-1;i>=0;i--)printf("%c",t[i]);
	return 0;
}

