#include<stdio.h>
#include<math.h>
#include<string.h>

void op(char* x)
{
	int l=0,r=strlen(x)-1,p=0;
	while(x[l]==' ')l++;
	l--;
	while(x[r]==' ')r--;
	r++;
	p=l;
	for(int i=l+1;i<strlen(x);i++)
	{
		if(x[i]!=' '||i>=r)
		{
			p++;
			x[p]=x[i];	
		}
	}
	x[p+1]='\0';
}

int main()
{
	char s[100];
	gets(s);
	op(s);
	printf("%s",s);
	return 0;
}

