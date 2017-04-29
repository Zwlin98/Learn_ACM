#include <stdio.h>

int main(int argc, char const *argv[])
{
	int N,num=0;
	scanf("%d",&N);
	int m,f;
	for (m = 0; m <=N ; ++m)
	{
		for (f = 0; f <=N-m; ++f)
		{
			if((N-m-f)%2==0&&4*m+3*f+(N-m-f)/2==N)
			{
				num++;
				printf("%d %d %d\n",m,f,(N-m-f));
			}
		}
	}
	if(num==0)
		printf("Error\n");
	return 0;
}