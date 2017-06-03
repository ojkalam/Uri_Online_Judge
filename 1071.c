#include<stdio.h>
int main()
 {
     int a,b,i,sum=0;
    scanf("%d%d",&a,&b);
    if(a>b){
    for(i=a;i>b;i--){
            if(i%2!=0 && i!=a){
           // printf("%d\n",i);
            sum=sum+i;
            }
       }
          printf("%d\n",sum);
    }
    else if(a<b){
        for(i=a;i<b;i++){
            if(i%2!=0 && i!=a){
             // printf("%d\n",i);
              sum=sum+i;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
