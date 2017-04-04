#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	double x,tax = 0;
	cin>>x;
	x = x-3500;
	if(x>0&&x<=1500) tax =  x*0.03;
	if(x>1500&&x<=4500) tax =  x*0.1-105;
	if(x>4500&&x<=9000) tax =  x*0.2-555;
	if(x>9000&&x<=35000) tax =  x*0.25-1005;
	if(x>35000&&x<=55000) tax =  x*0.3-2755;
	if(x>55000&&x<=80000) tax =  x*0.35-5505;
	if(x>80000) tax =  x*0.45-13505;
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(2)\
		<<"tax="
		<<tax
		<<endl;
	return 0;
}