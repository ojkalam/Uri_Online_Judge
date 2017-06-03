#include<stdio.h>9
int main()
{
    int i,x,sum=0,f=0;

    while(scanf("%d",&x)){
         if(x==0){
            break;
        }
        while(1){

        if(x%2==0){
            f=f+1;
            sum=sum+x;
        }
         x=x+1;
        if(f==5){
            break;
         }


    }
       printf("%d\n",sum);
       sum=0;
       f=0;
    }
    return 0;

}
