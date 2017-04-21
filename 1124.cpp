#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
	double f1 = 1,f2 =1,f3;
	int n;
	cin>>n;
	for (int i = 2; i < n; ++i)
	{
		f3 = f1+f2;
		f1 = f2;
		f2 = f3;
	}
	if(n == 1)f3=1;
	if(n == 2)f3=1;
	printf("%.0lf\n",f3);
	return 0;
}