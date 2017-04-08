#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	double x,y,ans;
	char f;
	cin>>x>>f>>y;
	switch(f)
	{
		case '+':ans = x+y;break;
		case '-':ans = x-y;break;
		case '*':ans = x*y;break;
		case '/':ans = x/y;break;
	}
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(2)
		<<ans
		<<endl;
	return 0;
}  