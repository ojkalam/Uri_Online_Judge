#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,j,c=11;
    double sum=0.0,a;
    char ch;
    cin>>ch;
    for(i=0;i<12;i++){

        for(j=0;j<12;j++){
            cin>>a;
            if(j>c){
                sum=sum+a;
            }
        }
        if(i<5){
            c--;
        }
        else if(i>=6){
            c++;
        }


    }
    if(ch=='S'){
        printf("%0.1lf\n",sum);
    }
    else{
        printf("%0.1lf\n",sum/30);
    }
    return 0;
}
