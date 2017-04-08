#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	double L,price,rate = 0.05;;
	int K,M;
	cin>>L>>K>>M;
	switch(K){
		case 90:price = 5.14;break;
		case 93:price = 5.54;break;
		case 97:price = 5.90;break;
		case 0:price = 5.13;break;
	}
	if(M == 2)rate = 0.02;
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(2)
		<<L*price*(1-rate)
		<<endl;
	return 0;
}