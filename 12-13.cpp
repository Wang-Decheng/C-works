#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char s[100];
	gets(s);
	int t=0,sum=0,f=1,i=0;
	while(s[i]<'0'||s[i]>'9')i++;
	for(;i<=strlen(s);i++)
	{
		if(s[i]<'0'||s[i]>'9')
		{
			if(!f)printf(",");
			printf("%d",t);
			f=0;
			sum+=t;
			t=0;
			continue;
		}
		t*=10;
		t+=s[i]-'0';
	}
	if(!f)printf("\n%d",sum);
	else printf("NO");
	return 0;
}

