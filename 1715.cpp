#include<iostream>
using namespace std;
int main()
{
    int i,j,n,a,b,c=0,d=0;
    cin>>a>>b;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            cin>>n;
            if(n>=1){
                c++;
            }
        }
        if(c==b)
        d++;
        c=0;
    }
    cout<<d<<endl;
    return 0;
}
