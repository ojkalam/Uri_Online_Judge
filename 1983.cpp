#include<iostream>
using namespace std;
int main()
{
   int se,n,a=1,sa,c=1;
   float sc,na;
      cin>>n;
      cin>>se>>sc;
       sa=se;
       na=sc;

       if(sc>=8){
          for(int i=1;i<n;i++){
            cin>>se>>sc;
            if(sc>na){
                na=sc;
                sa=se;
            }
          }
       }
       else{
        for(int i=1;i<n;i++){

        cin>>se>>sc;
        if(sc>=8){
          if(sc>na){
            na=sc;
            sa=se;
          }
        }
        else
            c++;
      }

    }
    if(c==n){
        cout<<"Minimum note not reached"<<endl;
    }
    else
        cout<<sa<<endl;
    return 0;
}
