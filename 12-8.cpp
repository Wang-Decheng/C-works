#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char s[5][100];
	int r[5];
	for(int i=0;i<5;i++)scanf("%s",s[i]),r[i]=i;;
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(strcmp(s[r[i]],s[r[j]])<0)
			{
				int t=r[i];
				r[i]=r[j];
				r[j]=t;
			}
		}
	}
	printf("max:%s min:%s",s[r[0]],s[r[4]]);
	return 0;
}

