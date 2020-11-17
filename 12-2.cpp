#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int n;
	char name[100][100];
	int no[100];
	int sc1[100],sc2[100],sc3[100],scs[100];
	int r[100];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%s%d%d%d",&no[i],name[i],&sc1[i],&sc2[i],&sc3[i]);
		scs[i]=sc1[i]+sc2[i]+sc3[i];
		r[i]=i;
	 } 
	 for(int i=1;i<=n;i++)
	 {
	 	for(int j=i+1;j<=n;j++)
	 	{
	 		if(scs[r[i]]>scs[r[j]])
	 		{
	 			int t=r[i];
	 			r[i]=r[j];
	 			r[j]=t;
			 }
		 }
	 }
	 for(int i=1;i<=n;i++)
	 {
	 	int t=r[i];
	 	printf("%d %s %d %d %d %d\n",no[t],name[t],sc1[t],sc2[t],sc3[t],scs[t]);
	 }
	return 0;
}

