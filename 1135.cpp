#include <stdio.h>

int main(int argc, char const *argv[])
{
	int M,N;
	scanf("%d%d",&M,&N);
	M = (M+1)*M/2;
	N = (N+1)*N/2;
	printf("%d\n",M*N);
	return 0;
}