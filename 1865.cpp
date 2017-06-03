#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
    int n,i,force;
    char ch[100];
    cin>>n;
    for(i=1;i<=n;i++){
        scanf("%s",ch);

        scanf("%d",&force);
        if(ch[0]=='T' && ch[1]=='h'&&  ch[2]=='o'&& ch[3]=='r' && ch[4]=='\0'){
            cout<<"Y"<<endl;
        }
        else{
            cout<<"N"<<endl;
        }

    }
    return 0;
}
