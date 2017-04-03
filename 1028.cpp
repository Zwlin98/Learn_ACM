#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	double money,rate;
	cin>>rate>>money;
	money = money*(1+rate);
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(2)
		<<money
		<<endl;
	return 0;
}