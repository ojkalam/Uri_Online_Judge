#include<stdio.h>
int main()
{
    int n,i,j,x,y,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&x,&y);
        for(j=1;j<=y;x++){
            if(x%2!=0){
                 sum=sum+x;
                 j++;
            }

        }
        printf("%d\n",sum);
        sum=0;

    }
    return 0;
}
