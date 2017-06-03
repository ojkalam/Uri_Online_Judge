#include<stdio.h>
int main()
{
    int a,b,total_km;
    float litters;
    scanf("%d%d", &a,&b);
    total_km=a*b;
    litters=(float)total_km/12;
    printf("%0.3f\n", litters);
    return 0;

}
