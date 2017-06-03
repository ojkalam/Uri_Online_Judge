#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,i,j;
    float sum=0.0,a;
    char ch;
    cin>>n;
    cin>>ch;
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            cin>>a;
            if(j==n){
                sum=sum+a;
            }
        }
    }
    if(ch=='S'){
        printf("%0.1f\n",sum);
    }
    else{
        printf("%0.1f\n",sum/12);
    }
    return 0;
}
