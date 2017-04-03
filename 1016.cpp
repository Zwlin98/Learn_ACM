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
		<<x/y
		<<endl;
	return 0;
}
