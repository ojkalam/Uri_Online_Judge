#include<stdio.h>
int main()
{
    int n,x,i,j,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        for(j=1;j<=x;j++){
            if(x%j==0){
                sum=sum+1;
            }
        }
        if(sum==2){
            printf("%d eh primo\n",x);
        }
        else
            printf("%d nao eh primo\n",x);
        sum=0;
    }
}
