#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double price = 0.4;

int main()
{
	int day;
	double sum=0.0,ave,key,p;
	cin>>key;
	day=1;
	while(1)
	{
		sum=sum+pow(2,day);
		day++;
		if(sum+pow(2,day)>key)
		break;
	}
	p=price*sum;
	ave=p/(day-1);
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(2)
		<<ave
		<<endl;
	return 0;
}