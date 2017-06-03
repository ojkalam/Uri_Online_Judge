#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,j,c=11;
    float sum=0.0,a;
    char ch;
    cin>>ch;
    for(i=0;i<12;i++){

        for(j=0;j<12;j++){
            cin>>a;
            if(j>c){
                sum=sum+a;
            }
        }
      c=c-1;
    }
    if(ch=='S'){
        printf("%0.1f\n",sum);
    }
    else{
        printf("%0.1f\n",sum/66);
    }
    return 0;
}
