#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	double open,close,high,low;
	string candle = "cross red candle";
	string sxian = "boring";
	string xxian = "boring";
	cin>>open>>high>>low>>close;
	if(close<open)candle = "solid blue and white candle";
	if(close>open)candle = "hollow red candle";
	if(low<open&&low<close) xxian = "lower shadow";
	if(high>open&&high>close) sxian = "upper shadow";
	cout<<candle;
	if(sxian!= "boring")
		cout<<','<<sxian;
	if(xxian!= "boring")
		cout<<','<<xxian;
	cout<<endl;
}