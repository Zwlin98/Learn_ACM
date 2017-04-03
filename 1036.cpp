#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	double x;
	cin>>x;
	int f = 0;
	if(x>0)f = 1;
	else if(x<0)f = -1;
	cout<<f<<endl;
	return 0;
}