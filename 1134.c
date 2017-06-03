#include<stdio.h>
int main()
{
    int i,j,n,al=0,ga=0,d=0,t=1;

    while(scanf("%d",&n)){

        if(n==1){
            al=al+t;
        }
        else if(n==2){
            ga=ga+t;
        }
        else if(n==3){
            d=d+t;
        }
        else if(n==4){
            break;
        }

    }
        printf("MUITO OBRIGADO\n");
        printf("Alcool: %d\n",al);
        printf("Gasolina: %d\n",ga);
        printf("Diesel: %d\n",d);
        return 0;
}
