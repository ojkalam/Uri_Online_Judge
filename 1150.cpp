#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int x,y,i,c=0,sum=0;
    cin>>x;

    while(scanf("%d",&y) && y<=x);

        for(i=x; sum<=y; i++){
            sum=sum + x++;
            c++;
        }

    cout<<c<<endl;
    return 0;
}
