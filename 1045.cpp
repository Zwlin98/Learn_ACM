#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x,y,xian = 4;
	cin>>x>>y;
	if(x*x+y*y<100)cout<<"in"<<endl;
	else if(x*x+y*y==100) cout<<"on"<<endl;
	else cout<<"out"<<endl;
	return 0;
}