#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	double sum=0;
	cin>>n;
	for (int i = 1; i <=n; ++i)
	{
		sum+=1.0/i;
	}
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(6)
		<<sum
		<<endl;
	return 0;
}  