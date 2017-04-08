#include <iostream>
#include <iomanip>
const double price = 1.2;
using namespace std;

int main(int argc, char const *argv[])
{
	int maxn,d,apple;
	double sum = 0;
	cin>>maxn;
	for (apple = 2,d = 0; sum <= maxn ; ++d,apple = apple*2)
		sum += apple;

	cout
		<<setiosflags(ios::fixed)
		<<setprecision(2)
		<<"Average="
		<<sum*price/d
		<<endl;
	return 0;
}  