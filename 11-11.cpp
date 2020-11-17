#include<stdio.h>
#include<math.h>
#include<string.h>

char d[5][20]={
	{'r','e','s','e','r','v','e'},
	{'r','e','p','l','a','c','e'},
	{'c','o','r','e'},
	{'n','a','t','u','r','e'},
	{'l','i','t','e','r','a','t','u','r','e'}
};

int main()
{
	char s[100];
	gets(s);
	for(int i=0;i<5;i++)
	{
		int f=1;
		if(strlen(s)!=strlen(d[i]))
		{
			f=0;
			continue;
		}
		for(int j=0;j<strlen(s);j++)
		{
			if(s[j]!=d[i][j]&&d[i][j]-'a'!=s[j]-'A')
			{
				f=0;
				break;
			}
		}
		if(f)
		{
			printf("YES");
			return 0;
		}
	}
	printf("NO");
	return 0;
}

