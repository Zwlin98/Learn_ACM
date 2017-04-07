#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int scores;
	char grade = 'B';
	cin>>scores;
	if(scores>=80)grade = 'A';
	if(scores<=59)grade = 'C';
	cout<<grade<<endl;
	return 0;
}