#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	double sum=0;
	cin>>n;
	for (int i = 1; i <=2*n-1; i+=2)
	{
		sum+=1.0/i;
	}
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(2)
		<<sum
		<<endl;
	return 0;
}  