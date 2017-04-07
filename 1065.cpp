#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int list[3],i;
	for (i = 0; i < 3; ++i)
	{
		cin>>list[i];
	}
	sort(list,list+3);
	for (i = 2; i > 0; --i)
	{
		cout<<list[i]<<' ';
	}
	cout<<list[0]<<endl;
	return 0;
}