#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	double x;
	cin>>x;
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(1)
		<<3*pow(x,4)-2*pow(x,3)-pow(x,2)+10
		<<endl;
	return 0;
}