#include<stdio.h>
#include<math.h>

int main()
{
	char ch1[200],ch2[200];
	int l;
	scanf("%s%s%d",ch1,ch2,&l);
	for(int i=0;i<l;i++)
	{
		if(ch1[i]>ch2[i])
		{
			printf(">");
			return 0;
		}
		if(ch1[i]<ch2[i])
		{
			printf("<");
			return 0;
		}
	} 
	printf("=");
	return 0;
}

