#include <stdio.h>
#define N 10
int sum(int a[],int n)
{
	int i,ans = 0;
	for(i=0;i<n;i++)
		ans +=a[i];
	return ans;
}

int main()
{
	int a[N],i;
	int result;
    for(i=0;i<N;i++)
	{
    scanf("%d",&a[i]);
	}
	result=sum(a,N);  // 调用函数求和
	printf("%d\n",result);
    return 0;
}