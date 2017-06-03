#include<stdio.h>
int main()
{
    int i,c=0;
    float sum=0,ave,a,n;
    while(1){
        scanf("%f",&n);
     if(n<0 || n>10){
      printf("nota invalida\n");
     }

     else if(n>=0 && n<=10){
            sum=sum+n;
            c=c+1;
            if(c==2){
            ave=sum/2;
            printf("media = %0.2f\n",ave);
            break;
            }
        }

    }
    return 0;
}
