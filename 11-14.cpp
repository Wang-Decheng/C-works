#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char s1[200],s2[200];
	int p1=0,p2=0;
	scanf("%s%s",s1,s2);
	while(p1<strlen(s1)||p2<strlen(s2)) 
	{
		if(p1<strlen(s1))
		{
			printf("%c",s1[p1]);
			p1++;
		}
		if(p2<strlen(s2))
		{
			printf("%c",s2[p2]);
			p2++;
		}
	}
	return 0;
}

