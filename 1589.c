#include<stdio.h>
int main()
{
    int i,n,x,y,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&x,&y);
        sum=x+y;
        printf("%d\n",sum);
    }
    return 0;
}
