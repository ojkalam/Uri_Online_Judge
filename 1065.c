#include<stdio.h>
int main()
{
    int i,n,sum=0;
    for(i=1;i<=5;i++){
        scanf("%d",&n);
        if(n>=0 && n%2==0 || n<0 && n%2==-0){
            sum++;
        }
    }
    printf("%d valores pares\n",sum);
    return 0;

}
