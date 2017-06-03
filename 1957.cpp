#include<iostream>
using namespace std;
int main()
{
    long int dec, rem, qt;
    int i=1,j,temp;
   /// char hexa[]={0,1,2,3,4,5,6,7,8,9,'A','B','C','D','E','F'};
    char h[100];
    cin>>dec;
    qt=dec;
    while(qt!=0){
        temp=qt%16;
        if(temp<10)
            temp=temp+48;
        else
            temp=temp+55;
        h[i++]=temp;
        qt=qt/16;
    }
    for(j=i-1;j>0;j--){
        cout<<h[j];
    }
    cout<<endl;
    return 0;

}
