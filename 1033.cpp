#include <iostream>
using namespace std;

int main()
{
	int x,y = 0;
	cin>>x;
	while(x>0)
	{
		y = x%10;
		x = x/10;
	}
	cout<<y<<endl;
	return 0;
}