#include<iostream>
using namespace std;
int main()
{
    long int n,i,j,a,b;
    string name1,name2;
    string ck1,ck2;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>name1>>ck1>>name2>>ck2;
        cin>>a>>b;
        j=a+b;
        if(j%2==0 && ck1=="PAR" || j%2==1 && ck1=="IMPAR"){
            cout<<name1<<endl;
        }
        else
            cout<<name2<<endl;
    }
    return 0;
}
