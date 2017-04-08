#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int year,months;
	int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>year>>months;
	if((year%100!=0&&year%4==0)|year%400==0)
		month[1] = 29;
	cout<<month[months-1]<<endl;
	return 0;
}