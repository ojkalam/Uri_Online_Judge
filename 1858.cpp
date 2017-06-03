#include<iostream>
using namespace std;
int main()
{
    int n,i,j,a,b,store;
    cin>>n;
    cin>>a;
    store=1;
    int temp=a;
    for(i=1;i<n;i++){
        cin>>b;
        if(temp>b){
            temp=b;
            store=i+1;
        }
    }

    cout<<store<<endl;

    return 0;
}
