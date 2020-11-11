#include<stdio.h>
#include<math.h>
#include<string.h>

int b[200];

int main()
{
	char s1[200],s2[200];
	scanf("%s%s",s2,s1);
	for(int i=0;i<strlen(s1);i++)b[s1[i]]=1;
	int f = 1;
	for(int i=0;i<strlen(s2);i++)
	{
		if(!b[s2[i]])
		{
			printf("%c",s2[i]);
			f = 0;
		}
	}
	if(f)printf("#");
	return 0;
}

