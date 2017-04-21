#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
double fact(int n)
{
	double sum=1;
	for (int i = 1; i <= n; ++i)
	{
		sum*=i;
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	double x;
	cin>>x;
	double cosx = 1- pow(x,2)/fact(2)+pow(x,4)/fact(4)-pow(x,8)/fact(8); 
	printf("%.2lf\n",cosx);
	return 0;
}