#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int rn,n,INTRUSOS=0,epr=0,edh=0;
    string h;
    while(scanf("%d",&n) !=EOF){
        for(int i=0;i<n;i++){
            cin>>rn>>h;
            if(h=="EPR"){
                epr++;
            }
            else if(h=="EHD"){
                edh++;
            }
            else
               INTRUSOS++;
        }
        cout<<"EPR: "<<epr<<endl;
        cout<<"EHD: "<<edh<<endl;
        cout<<"INTRUSOS: "<<INTRUSOS<<endl;
        INTRUSOS=0;
        epr=0;
        edh=0;
    }
    return 0;
}
