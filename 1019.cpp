#include <iostream>
#include <iomanip>
using namespace std;
const double RATE = 6.5573;

int main(int argc, char const *argv[])
{
	double S;
	cin>>S;
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(2)
		<<RATE*S
		<<endl;
	return 0;
}