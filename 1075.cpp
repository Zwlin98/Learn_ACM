#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int year,day,mon=1,m=1;
  int month[13]={0,31,28,31,30,31,30,31,31,30,31,20,31};
  cin>>year>>day;
  if((year%4==0&&year%100!=0)|year%400==0) month[2]=29;
  while(1)
  {
    if(day-month[m]>0)
    {
      mon++;
      day= day-month[m++];
    }
    else break;
  }
  cout<<year<<'-'<<mon<<'-'<<day<<endl;
  return 0;
}