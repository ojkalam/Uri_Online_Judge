#include<stdio.h>
int main()
{
    int i, sum=0;
    float n,ave,sum2=0;
    for(i=1;i<=6;i++){
        scanf("%f",&n);
        if(n>0){
            sum++;
            sum2+=n;
        ave=sum2/sum;
        }
    }
    printf("%d valores positivos\n",sum);
    printf("%0.1f\n",ave);
    return 0;
}
