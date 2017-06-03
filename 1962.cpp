#include<iostream>
using namespace std;
int main()
{
    int ac,dc,n,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>=2015){
            ac=a-2014;
            cout<<ac<<" A.C."<<endl;
        }
        else{
            dc=2015-a;
            cout<<dc<<" D.C."<<endl;
        }
    }
    return 0;
}
