#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,j,c=0;
    double sum=0.0,a;
    char ch;
    cin>>ch;
    for(i=0;i<5;i++){

        for(j=0;j<12;j++){
            cin>>a;
            if(j>c && j<11-c){
                sum=sum+a;
            }
        }
      c=c+1;
    }
    if(ch=='S'){
        printf("%0.1lf\n",sum);
    }
    else{
        printf("%0.1lf\n",sum/30);
    }
    return 0;
}
