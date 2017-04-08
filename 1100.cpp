#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	double d,sum=0;
	cin>>n;
	for (int i = 1; i <=n; i++)
	{
		d = pow(2,i-1);
		if(i%2==1)sum+=1.0/d;
		else sum-=1.0/d;
	}
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(2)
		<<sum
		<<endl;
	return 0;
}  