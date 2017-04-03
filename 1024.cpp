#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	double x;
	cin>>x;
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(1)
		<<2*x*x+x+8
		<<endl;
	return 0;
}