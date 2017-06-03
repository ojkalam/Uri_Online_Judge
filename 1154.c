#include<stdio.h>
int main()
{
    int t=0;
    float sum=0,n,ave;
    while(scanf("%f",&n)){

        if(n<0){
            break;
        }
        t=t+1;
        sum=sum+n;
    }
    ave=sum/t;
    printf("%0.2f\n",ave);
    return 0;
}
