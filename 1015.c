#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,d1,d2,sum,result;
    scanf("%lf%lf",&x1,&y1);
    scanf("%lf%lf",&x2,&y2);
    d1=((x2-x1)*(x2-x1));
    d2=((y2-y1)*(y2-y1));
    sum=(d1+d2);
    result=sqrt(sum);
    printf("%0.4lf\n", result);
    return 0;

}
