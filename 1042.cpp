#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	double x,y;
	cin>>x;
	y = x*x-2;
	if(x<0) y = sqrt(5-x);
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(2)
		<<y
		<<endl;
	return 0;
}