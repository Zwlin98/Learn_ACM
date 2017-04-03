#include <iostream>
using namespace std;

int main()
{
	int x,num =0;
	cin>>x;
	do
	{
		x = x/10;
		num++;
	}while(x>0);
	cout<<num<<endl;
	return 0;
}