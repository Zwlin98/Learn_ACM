#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	unsigned  long int x;
	unsigned  long int sum =0;
	int n;
	cin>>n;
	for (int i = 0; i <n ; ++i)
	{
		x = pow(2,i);
		sum = sum + x;
	}
	cout<<sum<<endl;
	return 0;
}