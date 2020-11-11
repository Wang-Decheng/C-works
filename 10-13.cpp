#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char s[200];
	scanf("%s",s);
	int l=strlen(s); 
	for(int i=l-1;i>=0;i--)
	{
		if(s[i]!='1'&&s[i]!='0')
		{
			printf("该字符串不是正确的IP地址");
			return 0;
		}
		s[i+32-l]=s[i];
	}
	for(int i=0;i<32-l;i++)s[i]='0';
	//for(int i=0;i<32;i++)printf("%c",s[i]);
	//printf("\n");
	for(int i=1;i<=4;i++)
	{
		int base = 1;
		int sum = 0;
		for(int j=7;j>=0;j--)
		{
			if(s[(i-1)*8+j]=='1')
			{
				sum+=base;
			}
			base<<=1;
		}
		printf("%d",sum);
		if(i!=4)printf(".");
	}
	return 0;
}

