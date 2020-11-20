#include<stdio.h>
#include<math.h>
#include<string.h>

char name[1010][1010];
char intime[1010][1010];
char outtime[1010][1010]; 
int r[1010];

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		r[i]=i;
		scanf("%s%s%s",name[i],intime[i],outtime[i]);
	}
	int p1=1,p2=1;
	for(int i=1;i<=n;i++)
	{
		if(strcmp(intime[i],intime[p1])<0)p1=i;
	}
	for(int i=1;i<=n;i++)
	{
		if(strcmp(outtime[i],outtime[p2])>0)p2=i;
	}
	printf("%s %s",name[p1],name[p2]);
	return 0;
}

