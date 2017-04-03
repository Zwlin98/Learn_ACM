#include <iostream>
using namespace std;

int main()
{
	int x,y,sum =0;
	cin>>x;
	while(x>0)
	{
		y = x%10;
		x = x/10;
		sum = sum + y;
	}
	cout<<sum<<endl;
	return 0;
}