#include<iostream>
using namespace std;
int main()
{
    int a[5],b[5],c=0;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        cin>>b[i];
        if(a[i]==b[i]){
            c++;
        }
    }
    if(c>=1){
        cout<<"N"<<endl;
    }
    else
        cout<<"Y"<<endl;
    return 0;

}
