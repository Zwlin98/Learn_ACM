#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string ABC[11] = {"\0","One","Two","Three",
						"Four","Five","Six",
						"Seven","Eight","Nine","Ten"};
	int n;
	cin>>n;
	if(n>=1&&n<=10)
		cout<<ABC[n]<<endl;
	else
		cout<<"Error"<<endl;
	return 0;
}