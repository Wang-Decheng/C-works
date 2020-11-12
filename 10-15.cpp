<<<<<<< HEAD
#include<stdio.h>
#include<math.h>

int main()
{
	double v,V;
	scanf("%lf%lf",&v,&V);
	int n = (int)ceil(V/v);
	int t=0;
	while(t*(t+1)/2<n)t++;
	t--;
	//printf("#%d\n",n);
	printf("%d",n+t);
}
=======
#include<stdio.h>
#include<math.h>

int main()
{
	double v,V;
	scanf("%lf%lf",&v,&V);
	int n = (int)ceil(V/v);
	int t=0;
	while(t*(t+1)/2<n)t++;
	t--;
	//printf("#%d\n",n);
	printf("%d",n+t);
}
>>>>>>> ec6675e8dbbfe446e4fa2ea9da063ef249f18de0
