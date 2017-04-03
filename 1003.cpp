#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	while(a!=0||b!=0)
	{
		cout<<a+b<<endl;
		cin>>a>>b;
	}
	return 0;
}