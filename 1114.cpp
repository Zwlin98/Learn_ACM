#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	double money,sum=0;
	cin>>money;
	while(money!=0)
	{
		sum+=money;
		cin>>money;
	}
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(2)
		<<sum
		<<endl;
	return 0;
}