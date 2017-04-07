#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	double rate = 1,money;
	cin>>money;
	if(money>=500)rate = 0.95;
	if(money>=1000)rate = 0.9;
	if(money>=3000)rate = 0.85;
	if(money>=5000)rate = 0.8;
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(2)
		<<money*rate
		<<endl;
	return 0;
}

