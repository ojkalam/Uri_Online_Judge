#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,i=1,p,a;
    float sum=0,store;
    cin>>n;
    while(i<=n){
        cin>>p>>a;
        if(p==1001){
            sum=sum+((float)a*1.50);
        }
        if(p==1002){
            sum=sum+((float)a*2.50);
        }
        if(p==1003){
            sum=sum+((float)a*3.50);
        }
        if(p==1004){
            sum=sum+((float)a*4.50);
        }
        if(p==1005){
            sum=sum+((float)a*5.50);
        }
        i++;
        store=store+sum;
        sum=0;
    }
    printf("%0.2f\n",store);
    return 0;
}
