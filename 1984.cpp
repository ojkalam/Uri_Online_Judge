#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
  long long n,r[10];
  int i=0,rev;
  scanf("%llu",&n);
  while(n!=0){
    rev=n%10;
    r[i]=rev;
    n=n/10;
    i++;
  }
  for(int j=0;j<i;j++){
    cout<<r[j];
  }
  cout<<endl;
  return 0;

}
