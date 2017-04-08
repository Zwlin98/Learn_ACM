#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	double x,y;
	cin>>x>>y;
	x = fabs(x)-2;
	y = fabs(y)-2;
	if(x*x+y*y<=0.25)cout<<50<<endl;
	else cout<<0<<endl;
	return 0;
}