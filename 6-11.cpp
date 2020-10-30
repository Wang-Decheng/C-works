#include<stdio.h>
#include<math.h>

int main()
{
	for(int i=1;i<=4;i++)
	{
		char c;
		scanf("%c",&c); 
		printf("%c %d %c\n",c,c,c+1);
	}
	return 0;
}

