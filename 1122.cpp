#include <stdio.h>
#include <math.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	printf("%d\n",int(sqrt(n)));
	for (i = 1; i <=int(sqrt(n)); ++i)
	{
		printf("%4d",i*i);
	}
	putchar('\n');
	return 0;
}