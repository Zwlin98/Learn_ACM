#include <iostream>
#include <iomanip>
using namespace std;
const double PI=3.14;

int main(int argc, char const *argv[])
{
	double r,h;
	cin>>r>>h;
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(2)
		<<2*PI*r*r+2*PI*r*h
		<<endl;
	return 0;
}