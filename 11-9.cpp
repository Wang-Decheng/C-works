#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char s[200];
	gets(s);
	int f=1;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==' ')
		{
			f=0;
			s[i]=',';
		}
	}
	if(f)printf("NotFound");
	else printf("%s",s);
	return 0;
}

