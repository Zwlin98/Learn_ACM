#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
	double f[51] = {0};
	f[1]=1;f[2] =1;
	int i,n;
	cin>>n;
	for ( i = 3; i <= n; ++i)
	{
		f[i]= f[i-1]+f[i-2];
	}
	for ( i = 1; i <n ; ++i)
	{
		printf("%.0lf ",f[i]);
	}
	printf("%.0lf\n",f[n]);
	return 0;
}