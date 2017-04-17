#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,i;
	cin>>n;
	for (i = 0; i <n; ++i)
	{
		cout<<int(pow(2,i))<<' ';
	}
	cout<<int(pow(2,i))<<endl;
	return 0;
}