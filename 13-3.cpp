#include<stdio.h>
#include<math.h>
#include<string.h>

char num[10][10]={
	{'z','e','r','o','\0'},
	{'o','n','e','\0'},
	{'t','w','o','\0'},
	{'t','h','r','e','e','\0'},
	{'f','o','u','r','\0'},
	{'f','i','v','e','\0'},
	{'s','i','x','\0'},
	{'s','e','v','e','n','\0'},
	{'e','i','g','h','t','\0'},
	{'n','i','n','e','\0'},
};

int main()
{
	char s[1000];
	gets(s);
	printf("%s",num[s[0]-'0']);
	for(int i=1;i<strlen(s);i++)
	{
		printf(" %s",num[s[i]-'0']);
	 } 
	return 0;
}

