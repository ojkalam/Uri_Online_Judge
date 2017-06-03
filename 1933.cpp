#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b) != EOF)
    {
        if(a>=b){
            cout<<a<<endl;
        }
        else
            cout<<b<<endl;
    }
    return 0;
}
