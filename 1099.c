#include<stdio.h>
int main()
 {
     int n,a,b,i,j,sum=0;
     scanf("%d",&n);
     for(i=1;i<=n;i++){
        scanf("%d%d",&a,&b);
        if(a>=b){
            for(j=a;j>b;j--){
                if(j%2!=0 && j!=a){
                    sum=sum+j;
                }
            }
            printf("%d\n",sum);
            sum=0;
        }
        if(a<b){
            for(j=a;j<b;j++){
                if(j%2!=0 && j!=a){
                    sum=sum+j;
                }
            }
            printf("%d\n",sum);
            sum=0;
        }
     }
    return 0;
}
