#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x,y;
	cin>>x;
	y = x;
	if(x>=1&&x<10)y = 3*x-1;
	else if(x>=10)y = 4*x-2;
	cout<<y<<endl;
	return 0;
}