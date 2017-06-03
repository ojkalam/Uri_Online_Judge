#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,p;
    scanf("%d",&n);
    if(n>5 && n<2000){
        for(i=1;i<=n;i++){
            if(i%2==0){
            p=pow(i,2);
            printf("%d^2 = %d\n",i,p);
            }
        }
    }
    return 0;
}
