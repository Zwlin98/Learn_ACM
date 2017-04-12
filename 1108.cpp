#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	double sum =0,num =0;
	while(cin>>n)
	{
		sum +=n;
		num++;
	}
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(2)
		<<sum/num
		<<endl;
	return 0;
}