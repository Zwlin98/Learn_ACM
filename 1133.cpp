#include <iostream>
using namespace std;

int main()
{
	int start,stop;
	cin>>start>>stop;
	int cut;
	for(;start<=stop;start++)
	{
		cut = start/100+start%100;
		if(cut*cut==start) cout<<start<<'\n';
	}
	return 0;
}