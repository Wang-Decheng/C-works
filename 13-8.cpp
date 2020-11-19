#include<stdio.h>
#include<math.h>
#include<string.h>

struct num_arr
{
	int a[20];
	int p;
	int minn;
}t;

void find()
{
	t.p=1;
	t.minn=t.a[1];
	for(int i=2;i<=10;i++)
	{
		if(t.a[i]<t.minn)
		{
			t.minn=t.a[i];
			t.p=i;
		 } 
	}
}

int main()
{
	for(int i=1;i<=10;i++)
	{
		scanf("%d",&t.a[i]);
	}
	find();
	printf("%d %d",t.minn,t.p-1);
	return 0;
}

