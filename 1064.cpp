#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x,y,z,max;
	cin>>x>>y>>z;
	max = z;
	if(x>y&&x>z)max = x;
	if(y>x&&y>z)max = y;
	cout<<max<<endl;
	return 0;
}