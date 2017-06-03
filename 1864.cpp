#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
    int i,n;
    char ch[35]={'L','I','F','E',' ','I','S',' ','N','O','T',' ','A',' ','P','R','O','B','L','E','M',' ','T','O',' ','B','E',' ','S','O','L','V','E','D'};
    cin>>n;
    for(i=0;i<n;i++){
        printf("%c",ch[i]);
    }
    cout<<endl;
    return 0;
}
