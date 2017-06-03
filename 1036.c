#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,x,y;
    scanf("%lf %lf %lf",&a,&b,&c);
    d=(pow(b,2)-(4*a*c));
    x=((-b)+sqrt(d))/(2*a);
    y=((-b)-sqrt(d))/(2*a);
    if(a!=0 && d>0){
        printf("R1 = %0.5lf\nR2 = %0.5lf\n",x,y);
    }

    else {
        printf("Impossivel calcular\n");
    }

    return 0;
}
