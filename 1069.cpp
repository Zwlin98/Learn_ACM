#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	double V;
	int cla = 1;
	cin>>V;
	if(V>=11.19)cla = 2;
	if(V>=16.67)cla = 3;
	cout<<cla<<endl;
	return 0;
}
