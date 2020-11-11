#include<stdio.h>
#include<math.h>
#include<string.h>

int r[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
	int y,m,d;
	scanf("%d%d%d",&y,&m,&d);
	if((y%4==0&&y%100!=0)||y%400==0)r[2]++;
	int ans = 0;
	for(int i=1;i<m;i++)ans+=r[i];
	printf("%d",ans+d);
	return 0;
}

