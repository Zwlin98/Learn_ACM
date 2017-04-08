#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    int a,b;
    cin>>a>>b;
    int c = a*a+b*b;
    if(c>100)cout<<c/100<<endl;
    else cout<<c<<endl;
    return 0;
}