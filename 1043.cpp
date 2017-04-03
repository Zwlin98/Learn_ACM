#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	double x,y;
	cin>>x;
	y = pow(x+1,2)+2*x+1.0/x;
	if(x>=0) y = sqrt(x);
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(2)
		<<y
		<<endl;
	return 0;
}