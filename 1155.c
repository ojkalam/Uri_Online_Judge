#include<stdio.h>
int main()
{
    int i;
    float sum=0;
    for(i=1;i<=100;i++){
        sum=sum+(1/(float)i);
    }
    printf("%0.2f\n",sum);
    return 0;
}
