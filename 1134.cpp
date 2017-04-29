#include <stdio.h>

int main(int argc, char const *argv[])
{
	int N;
	int i,j,k,num=0;
	scanf("%d",&N);
	for(i = 0;i<=9;i++)
		for(j = 0;j<=9;j++)
			for(k = 0;k<=9;k++)
			{
				if((i*100+j*10+k)+(k*100+j*10+i)==N)
					{
						num++;
						printf("a=%d,b=%d,c=%d\n",i,j,k);
					}

			}
	if(!num)printf("No Solution\n");
	return 0;
}