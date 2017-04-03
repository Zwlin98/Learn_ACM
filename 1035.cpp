#include <iostream>
using namespace std;

int main()
{
	long int x;
	cin>>x;
	if(x<0)x = 0-x;
	cout<<x<<endl;
	return 0;
}