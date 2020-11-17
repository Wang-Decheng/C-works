#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int n;
	char name[100][100];
	char num[100][100];
	int r[100];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s%s",name[i],num[i]);
		r[i]=i;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(strcmp(name[r[i]],name[r[j]])>0)
			{
				int t=r[i];
				r[i]=r[j];
				r[j]=t;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		printf("%s %s\n",name[r[i]],num[r[i]]);
	}
	return 0;
}

