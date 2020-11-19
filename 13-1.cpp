#include<stdio.h>
#include<math.h>
#include<string.h>

int ack(int x,int y)
{
	if(x==0)return y+1;
	if(y==0)return ack(x-1,1);
	return ack(x-1,ack(x,y-1));
}

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("ack(%d,%d)=%d",m,n,ack(m,n));
	return 0;
}

