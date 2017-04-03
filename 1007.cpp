#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	double x;
	cin>>x;
	cout<<setiosflags(ios::fixed)
	<<setprecision(2)<<5*(x-32)/9<<endl;
	return 0;
}