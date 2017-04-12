#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	double score,sum=0,no=0;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>score;
		sum+=score;
		if(score<60)no++;
	}
	cout
		<<setiosflags(ios::fixed)
		<<setprecision(1)
		<<sum/n
		<<endl;	
	cout<<setprecision(0)<<no<<endl;
	return 0;
}