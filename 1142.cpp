#include <stdio.h>

int main()
{
	int a[3][3];
	double ave[3];
	double sum;
	for (int i = 0; i < 3; ++i)
	{
		sum = 0;
		for (int j = 0; j < 3; ++j)
		{
			scanf("%d",&a[i][j]);
			sum+=a[i][j];
		}
		ave[i] = sum/3;
	}
	for (int i = 0; i < 3; ++i)
	{
		printf("%.1lf\n",ave[i]);
	}
	return 0;
}