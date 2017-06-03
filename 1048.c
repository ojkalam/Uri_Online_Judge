#include<stdio.h>
int main()
{
    float n,ns,nn;
    scanf("%f",&n);
    if(n>=0 && n<=400.00){
        ns=n+(n*0.15);
        nn=ns-n;
        printf("Novo salario: %0.2f\n",ns);
        printf("Reajuste ganho: %0.2f\n",nn);
        printf("Em percentual: 15 %%\n");
    }
    else if(n>=400.01 && n<=800){
        ns=n+(n*0.12);
        nn=ns-n;
        printf("Novo salario: %0.2f\n",ns);
        printf("Reajuste ganho: %0.2f\n",nn);
        printf("Em percentual: 12 %%\n");

    }
    else if(n>=800.01 && n<=1200){
        ns=n+(n*0.10);
        nn=ns-n;
        printf("Novo salario: %0.2f\n",ns);
        printf("Reajuste ganho: %0.2f\n",nn);
        printf("Em percentual: 10 %%\n");
    }
    else if(n>=1200.01 && n<=2000){
        ns=n+(n*0.07);
        nn=ns-n;
        printf("Novo salario: %0.2f\n",ns);
        printf("Reajuste ganho: %0.2f\n",nn);
        printf("Em percentual: 7 %%\n");
    }
    else if(n>2000){
            ns=n+(n*0.04);
            nn=ns-n;
        printf("Novo salario: %0.2f\n",ns);
        printf("Reajuste ganho: %0.2f\n",nn);
        printf("Em percentual: 4 %%\n");

    }
    return 0;
}
