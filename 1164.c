#include<stdio.h>
int main()
{
    int d,i,j,sum=0,n,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        for(j=1;j<x;j++){
            if(x%j==0){
                sum=sum+j;
            }
        }
        if(sum==x){
            printf("%d eh perfeito\n",x);
            }
        else
            printf("%d nao eh perfeito\n",x);
            sum=0;
    }
    return 0;
}
