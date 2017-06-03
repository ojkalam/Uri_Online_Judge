#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double a,b,c,d;
    scanf("%lf %lf",&a,&b);
    c=b-a;
    d=((c*100)/a);
    printf("%0.2lf%%\n",d);
    return 0;
}
