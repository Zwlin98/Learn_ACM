#include <iostream>
#include <iomanip>
using namespace std;

double zfib(int n)
{
	int f1 = 2,f2 = 3;
	int f;
	for (int i = 2 ; i < n ; ++i)
	{
		f = f1+f2;
		f1 = f2;
		f2 = f;
	}
	if(n==1)return f1;
	if(n==2)return f2;
	else return f;
}
double mfib(int n)
{
	int f1 = 1,f2 = 2;
	int f;
	for (int i = 2 ; i < n ; ++i)
	{
		f = f1+f2;
		f1 = f2;
		f2 = f;
	}
	if(n==1)return f1;
	if(n==2)return f2;
	else return f;
}
int main(int argc, char const *argv[])
{
	int n;
	double sum =0;
	cin>>n;
	for (int i = 1; i <=n; ++i)
	{
		sum+=zfib(i)/mfib(i);
	}
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(6)
		<<sum
		<<endl;
	return 0;
}