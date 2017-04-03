#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	double x,y;
	cin>>x>>y;
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(2)
		<<sqrt(x*x+y*y)
		<<endl;
	return 0;
}