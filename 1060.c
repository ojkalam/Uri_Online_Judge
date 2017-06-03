#include<stdio.h>
int main()
{
    int i,sum=0;
    float n;
    for(i=1;i<=6;i++){
        scanf("%f",&n);
        if(n>0){
        sum++;
        }
    }
    printf("%d valores positivos\n",sum);

    return 0;
}
