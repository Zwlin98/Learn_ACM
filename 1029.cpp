#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x;
	cin>>x;
	cout<<x%10<<' '
	<<x/10%10<<' '
	<<x/100<<endl;
	return 0;
}