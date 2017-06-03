#include<stdio.h>
int main()
{
    int n,i;
    float x,y,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++){

        scanf("%f%f",&x,&y);
        if(y==0){
            printf("divisao impossivel\n");
        }
        else if(y!=0){
            d=x/y;
            printf("%0.1f\n",d);
        }
    }
    return 0;
}
