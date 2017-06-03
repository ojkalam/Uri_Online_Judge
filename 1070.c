#include<stdio.h>
int main()
{
    int i,sum,n,b;
    scanf("%d",&n);
    for(i=1;i<=5;i++){
        if(n%2!=0){
            n+=2;
            printf("%d\n",n);
        }
        else if(n%2==0){
            b=++n;
            n+=2;
            printf("%d\n",b);
            printf("%d\n",n);
        }
    }
    return 0;
}
