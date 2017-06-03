#include<stdio.h>
int main()
{
    int a,b,c,d;
    float e,f,Valor_a_paga;
    scanf("%d%d%f",&a,&b,&e);
    scanf("%d%d%f", &c,&d,&f);
    Valor_a_paga=b*e+d*f;
    printf("VALOR A PAGAR: R$ %.2f\n",Valor_a_paga);
    return 0;
}
