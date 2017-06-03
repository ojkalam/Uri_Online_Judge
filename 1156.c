#include<stdio.h>
int main()
{
    int i,j,n=1;
    float v,sum=0;
    for(i=1;i<=39;i=i+2){
        v=(float)i/(float)n;
        sum=sum+v;
        n=n*2;
    }
    printf("%0.2f\n",sum);
    return 0;
}
