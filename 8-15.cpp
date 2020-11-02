#include<stdio.h>
#include<math.h>

int d[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
	int y,m;
	scanf("%d,%d",&y,&m);
	d[2]=y%4==0&&y%400!=0?29:28;
	printf("%d",d[m]);
	return 0;
}

