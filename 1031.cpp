#include <iostream>
using namespace std;

int main()
{
	int x,y;
	cin>>x;
	while(x%10==0)
	{
		x = x/10;
	}
	while(x>0)
	{
		y = x%10;
		x = x/10;
		cout<<y;
	}
	cout<<endl;
	return 0;
}