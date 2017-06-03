#include<stdio.h>
int main()
{
    int n,x,i,low,po;
    scanf("%d",&n);
    low=n;
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        if(low>x){
            low=x;
            po=i-1;
        }
    }
    printf("Menor valor: %d\n",low);
    printf("Posicao: %d\n",po);
    return 0;
}
