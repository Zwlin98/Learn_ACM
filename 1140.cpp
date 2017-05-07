#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[100][100]={0};
	int n,i,j;
	scanf("%d",&n);
	for (i = 0; i < n; ++i)
		a[i][i]=1;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			printf("%d ",a[i][j]);
		}
		putchar('\n'); 
	}
	return 0;
}