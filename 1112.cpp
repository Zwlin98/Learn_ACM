#include <stdio.h>

double ave(double a[],int n)
{
	double sum=0;
	for (int i = 0; i < n; ++i)
	{
		sum+=a[i];
	}
	return sum/n;
}
int main()
{
	double a[1000],x,average;   //a数组存放有效数据
	int cnt=0;     //cnt表示有效数据的个数
	scanf("%lf",&x);
	while(x>=0)
	{
		a[cnt++]=x;
		scanf("%lf",&x);
	}
    average=ave(a,cnt);
	printf("%.1f\n",average);
	return 0;
}