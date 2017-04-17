#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	double N,num=45;
	cin>>N;
	int nian=1980;
	while(num<N) { num*=1.01;nian++;}
	cout<<nian<<endl;
	return 0;
}