#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	if (n%5==0&&n%7==0)
		cout<<"yes"<<endl;
	else 
		cout<<"no"<<endl;
	return 0;
}
