#include<stdio.h>
int main()
{
    float a,b,c,p,area;
    scanf("%f%f%f",&a,&b,&c);

        if(b+c>a && c+b>a && a+c>b){
        p=a+b+c;
        printf("Perimetro = %0.1f\n",p);
            }

        else {
        area=(0.5*(a+b)*c);
        printf("Area = %0.1f\n",area);
    }
    return 0;
}
