#include<stdio.h>
#include<math.h>
#include<string.h>

void op(char* a,char* b)
{
	int p=0;
	for(int i=0;i<strlen(a);i++)
	{
		if((i&1)&&(a[i]&1))
		{
			b[p]=a[i];
			p++;
		}
	}
	if(!p)
	{
		b[0]='#';
	}
	b[p+1]='\0';
}

int main()
{
	char s[200],t[200];
	gets(s);
	op(s,t);
	printf("%s",t);
	return 0;
}

