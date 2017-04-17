#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int x,y;
	cin>>x>>y;
	cout<<int(pow(x,y))
	<<' '
	<<int(pow(x,y))%1000
	<<endl;
	return 0;
}