#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	double num,price = 50;
	cin>>num;
	if(num>=30)price=48;
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(2)
		<<num*price
		<<endl;
	return 0;
}
