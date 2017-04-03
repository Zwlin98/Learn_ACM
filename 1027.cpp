#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	double money,year,rate;
	cin>>money>>year>>rate;
	double interst = money*pow(1+rate,year)-money;
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(2)
		<<interst
		<<endl;
	return 0;
}