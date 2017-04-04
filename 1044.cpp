#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x,y,xian = 4;
	cin>>x>>y;
	if(x>0&&y>0)xian =1;
	if(x<0&&y>0)xian =2;
	if(x<0&&y<0)xian =3;
	cout<<xian<<endl;
	return 0;
}