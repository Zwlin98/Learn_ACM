#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	double a,b,c;
	cin>>a>>b>>c;
	double x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
	double x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
	if (sqrt(b*b-4*a*c)==0)
		cout
			<<setiosflags(ios::fixed)
			<<setprecision(2)
			<<x1
			<<endl;
	else
		cout
			<<setiosflags(ios::fixed)
			<<setprecision(2)
			<<x1<<' '<<x2
			<<endl;
	return 0;
}