#include<stdio.h>
#include<string.h>
int main()
{
	char s[20000];
	scanf("%s",s);
	char ch[100][100];
	strcpy(ch[1],"��д��ĸ");
	strcpy(ch[2],"Сд��ĸ");
	strcpy(ch[3],"�����ַ�");
	strcpy(ch[4],"�����ַ�");
	int cnt[10]={0};
	int r[5]={0,1,2,3,4};
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]-'A'>=0&&s[i]-'A'<26)cnt[1]++;
		else if(s[i]-'a'>=0&&s[i]-'a'<26)cnt[2]++;
		else if(s[i]-'0'>=0&&s[i]-'0'<10)cnt[3]++;
		else cnt[4]++;
	}
	for(int i=1;i<=4;i++)
	{
		for(int j=i+1;j<=4;j++)
		{
			if(cnt[r[i]]<cnt[r[j]])
			{
				int t=r[i];
				r[i]=r[j];
				r[j]=t;
			}
		}
	}
	for(int i=1;i<=4;i++)printf("%d ",r[i]);
	printf("\n");
	printf("��д��ĸ��%d Сд��ĸ��%d �����ַ���%d �����ַ���%d �Ӷൽ������������£� %s��%d %s��%d %s��%d %s��%d",cnt[1],cnt[2],cnt[3],cnt[4],ch[r[1]],cnt[r[1]],ch[r[2]],cnt[r[2]],ch[r[3]],cnt[r[3]],ch[r[4]],cnt[r[4]]);
}
