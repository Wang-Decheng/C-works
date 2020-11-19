#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char s[200],a[100],b[100];
	int la=0,lb=0;
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++)
	{
		if(i%2==1)
		{
			la++;
			a[la]=s[i];
		}
		else
		{
			lb++;
			a[lb]=s[i];
		}
	}
	for(int i=0;i<lb;i++)
	{
		for(int j=i+1;j<lb;j++)
		{
			if(b[i]>b[j])
			{
				char t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
	printf("#%d %d\n",la,lb);
	for(int i=0;i<lb;i++)
	{
		printf("%c",b[i]);
		if(i<la)printf("%c",a[i]);
	}
	return 0;
}

