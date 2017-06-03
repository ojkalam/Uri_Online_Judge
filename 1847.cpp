#include<iostream>
using namespace std;
int main()
{
    int a,b,c,num3,num4,d1,d2;
    cin>>a>>b>>c;
    num3=c-b;
    num4=b-a;
    d1=b-c;
    d2=a-b;
    if(b<a && c>=b){
        cout<<":)"<<endl;
    }
    else if(b>a && c<=b){
        cout<<":("<<endl;
    }
    else if(b>a && c>b && num3<num4){
        cout<<":("<<endl;
    }
    else if(b>a && c>b && num3>=num4){
        cout<<":)"<<endl;
    }
    else if(a>b && b>c && d1<d2){
        cout<<":)"<<endl;
    }
    else if(a>b && b>c && d1>=d2){
        cout<<":("<<endl;
    }
    else if(a==b && c>b){
        cout<<":)"<<endl;
    }
    else{
         cout<<":("<<endl;
    }
    return 0;
}
