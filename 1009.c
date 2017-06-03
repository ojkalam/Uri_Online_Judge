#include<stdio.h>

int main()
{
    char *name;
    double salary,vs, total;
    scanf("%s", &name);
    scanf("%lf%lf",&salary,&vs);
    total=vs*.15;
    printf("TOTAL = R$ %.2lf\n", total+salary);
    return 0;

}
