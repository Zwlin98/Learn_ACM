#include <iostream>
#include <iomanip>
using namespace std;
const double PI=3.14;

int main(int argc, char const *argv[])
{
	double r;
	cin>>r;
	cout<<setiosflags(ios::fixed)
	<<setprecision(2)<<2*PI*r<<' '
	<<PI*r*r<<endl;
	return 0;
}