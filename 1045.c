#include<stdio.h>
int main()
{
    double a,b,c,x;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a<b){
        x=a; a=b; b=x;
        }
    if(b<c){
        x=b;b=c;c=x;
    }
    if(a<b){
        x=a;a=b;b=x;
    }


    if(a >= b+c){
        printf("NAO FORMA TRIANGULO\n");
    if(a==b && b==c){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if((a==b && b!=c) || (a==c && a!=b) || (b==c && c!=a)){
        printf("TRIANGULO ISOSCELES\n");
    }

    }
    else if((a*a) == ((b*b)+(c*c))){
        printf("TRIANGULO RETANGULO\n");
    if(a==b && b==c){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if((a==b && b!=c) || (a==c && a!=b) || (b==c && c!=a)){
        printf("TRIANGULO ISOSCELES\n");
    }

    }
    else if((a*a) > ((b*b)+(c*c))){
        printf("TRIANGULO OBTUSANGULO\n");
    if(a==b && b==c){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if((a==b && b!=c) || (a==c && a!=b) || (b==c && c!=a)){
        printf("TRIANGULO ISOSCELES\n");
    }

    }
    else if((a*a) < ((b*b)+(c*c))){
        printf("TRIANGULO ACUTANGULO\n");
    if(a==b && b==c){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if((a==b && b!=c) || (a==c && a!=b) || (b==c && c!=a)){
        printf("TRIANGULO ISOSCELES\n");
    }


    }
    else if(a==b && b==c){
        printf("TRIANGULO EQUILATERO\n");
    if(a==b && b==c){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if((a==b && b!=c) || (a==c && a!=b) || (b==c && c!=a)){
        printf("TRIANGULO ISOSCELES\n");
    }

    }
    else if((a==b && b!=c) || (a==c && a!=b) || (b==c && c!=a)){
        printf("TRIANGULO ISOSCELES\n");
    if(a==b && b==c){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if((a==b && b!=c) || (a==c && a!=b) || (b==c && c!=a)){
        printf("TRIANGULO ISOSCELES\n");
    }

    }

    return 0;
}
