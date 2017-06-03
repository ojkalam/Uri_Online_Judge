#include<stdio.h>
int main()
{
    float a,t;
    scanf("%f",&a);
    if(a>=0 && a<=2000){
        printf("Isento\n");
    }
    else if(a>=2000.01 && a<=3000){
            t=(a-2000)*0.08;
        printf("R$ %0.2f\n",t);
    }
    else if(a>=3000.01 && a<=4500){
        t=(1000*0.08)+((a-3000)*0.18);
        printf("R$ %0.2f\n",t);
    }
    else if(a>4500){
        t=(1000*0.08)+(1500*0.18)+(a-4500)*0.28;
        printf("R$ %0.2f\n",t);
    }
    return 0;
}
