#include<stdio.h>
#include<math.h>
#include<string.h>

int isrn(int x)
{
	return (x%4==0&&x%100!=0)||x%400==0;
}

int main()
{
	int y,n;
	scanf("%d%d",&y,&n);
	while(!isrn(y))y++;
	n--;
	y+=n/97*400;
	n%=97;
	while(n>0)
	{
		y+=4;
		if(!isrn(y))y+=4;
		n--;
	}
	printf("%d",y);
	return 0;
}

