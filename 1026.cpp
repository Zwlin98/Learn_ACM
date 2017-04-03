#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	double x,y;
	cin>>x>>y;
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(2)
		<<0.538*x+0.03*y
		<<endl;
	return 0;
}