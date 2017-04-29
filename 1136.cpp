#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n,peach = 1;
	scanf("%d",&n);
	n--;
	while(n--)
	{
		peach = (peach+1)*2;
	}
	printf("%d\n",peach);
	return 0;
}