#include<stdio.h>

int main()
{
	int a = 0;
	char ch[100];
	scanf("%s",ch);
	//printf("%c%c%c%c",ch[2],ch[3],ch[4],ch[5]);
	a = (ch[2]-'0')*1000 + (ch[3]- '0')*100 + (ch[4] - '0')*10 + (ch[5]-'0');
	printf("%d %d",a,a+1024);
}
