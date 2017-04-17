#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double HIGH = 100;

int main(int argc, char const *argv[])
{
	int n,i;
	double high=100;
	cin>>n;
	for (i = 1; i < n; ++i)
	{
		high += 2*(1.0/pow(2,i))*HIGH;
	}
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(6)
		<<high<<' '
		<<(1/pow(2,n))*HIGH
		<<endl;
	return 0;
}