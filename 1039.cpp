#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,odd=0,even=0;
	cin>>n;
	for (int i = 1; i <=n ; ++i)
	{
		if(i%2==0)even+=i;
		else odd+=i;
	}
	cout<<odd<<'\n'
		<<even<<endl;
	return 0;
}