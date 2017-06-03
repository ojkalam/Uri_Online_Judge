#include<stdio.h>
int main()
{
    int NUMBER, h;
    float aph, SALARY;
    scanf("%d%d%f",&NUMBER,&h,&aph);
    SALARY=h*aph;
    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2f\n", SALARY);
    return 0;

}
