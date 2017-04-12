#include <iostream>
using namespace std;

int isFactorialSum(int);

int main(int argc, char const *argv[])
{
	int N;
	while(cin>>N)
	{
	if(N==1) cout<<1<<endl;
	else if(isFactorialSum(N))cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	}
	return 0;
}
//参考了下面网站的源码，原理答者讲的很清楚了，我也受益匪浅
//https://www.oschina.net/question/3281666_2231666
int isFactorialSum(int n)
{
  	if (n <= 0) return 0;
  	if (n == 1 || n == 2) return 1;
  	if (n % 2 == 1) return isFactorialSum(n - 1);
	int k = 2;
  	while (1) \
  	{
    	if (n % k != 0) break;
	    while (n % k == 0)
	    {
	    	n /= k;
	    	k++;
	    }
	    if (n == 1) return 1;
	    if (n < k) break;
	    n--;
  	}
  	return 0;
}
