#include<stdio.h>
#include<math.h>

int main()
{
	char ch1[200],ch2[200];
	int l;
	scanf("%s%s%d",ch1,ch2,&l);
	for(int i=0;i<l;i++)
	{
		if(ch1[i]>='a')ch1[i]=ch1[i]-'a'+'A';
		if(ch2[i]>='a')ch2[i]=ch2[i]-'a'+'A';	
        if(ch1[i]>ch2[i])
		{
			printf("1");
			return 0;
		}
		if(ch1[i]<ch2[i])
		{
			printf("-1");
			return 0;
		}
	} 
	printf("0");
	return 0;
}

