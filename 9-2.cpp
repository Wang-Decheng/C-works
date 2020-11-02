#include<stdio.h>
#include<math.h>

int main()
{
	char c[1000];
	int cnt = 0; 
	while(scanf("%s",c)!=EOF)
	{
		printf("%s",c);
		cnt++;
		if(cnt>200)break;
	}


	return 0;
}

