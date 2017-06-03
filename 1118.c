#include<stdio.h>
int main()
{
    int i,c;
    float sum,ave,a,n;
    do{
        c=0;
        sum=0;
        while(c<2){
        scanf("%f",&n);
        if(n>=0 && n<=10){
            sum=sum+n;
            c=c+1;
            if(c==2){
            ave=sum/2;
            }

        }
        else{
            printf("nota invalida\n");
            }
        }
        printf("media = %0.2f\n",ave);
        do{
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%f",&n);
        }
        while(n!=1 && n!=2);
    }
    while(n!=2);

    return 0;
}
