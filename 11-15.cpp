#include<stdio.h>
#include<math.h>
#include<string.h>

int kmp[300];
int la,lb,j,cnt;
char a[300],b[30];

int main()
{
	scanf("%s%s",a+1,b+1);
	la=strlen(a+1);
	lb=strlen(b+1);
	for(int i=2; i<=lb; i++)
	{
		while(j&&b[i]!=b[j+1])j=kmp[j];
		if(b[j+1]==b[i])j++;
		kmp[i]=j;
	}
	j=0;
	for(int i=1;i<=la;i++)
	{
		while(j&&b[j+1]!=a[i])j=kmp[j];
		if(b[j+1]==a[i])j++;
		if(j==lb)cnt++;
	}
	printf("%d",cnt);
	return 0;
}

