#include<stdio.h>
//#include<math.h>
int main()
{
    int a,b,s,c,d;
    scanf("%d%d%d", &a,&b,&s);
    c=(a+b+(abs(a-b)))/2;
    d=(c+s+abs(c-s))/2;
    printf("%d eh o maior\n",d);
    return 0;

}
