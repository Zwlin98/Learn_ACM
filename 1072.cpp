#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int year;
	cin>>year;
	if((year%100!=0&&year%4==0)|year%400==0)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	return 0;
}