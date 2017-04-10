#include <iostream>
#include <iomanip>
using namespace std;
double jiecheng(int n)
{
	double ans = 1;
	for (int i = 1; i <=n ; ++i)
		ans = ans*i;
	return ans;
}

int main(int argc, char const *argv[])
{
	double e=1;
	int n;
	cin>>n;
	for (int i = 1; i <=n ; ++i)
	{
		e += 1/jiecheng(i);
	}
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(6)
		<<e
		<<endl;
	return 0;
}