#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    if(a>=b){
        c=(b-a)+24;
        printf("O JOGO DUROU %d HORA(S)\n",c);
    }

    else if(b>=a){
            d=(b-a);
        printf("O JOGO DUROU %d HORA(S)\n",d);
    }

    return 0;
}
