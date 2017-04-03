#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	double a,b,c;
	cin>>a>>b>>c;
	cout<<setiosflags(ios::fixed)<<setprecision(1)<<(a+b+c)/3<<endl;
	return 0;
}