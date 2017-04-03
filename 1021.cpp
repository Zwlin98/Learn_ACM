#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	double p,s;
	cin>>p>>s;
	double q = (90-p/10-s*3/10)/0.6;
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(1)
		<<q
		<<endl;
	return 0;
}