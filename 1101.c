#include<stdio.h>
int main()
{
    int m,n,i,j,sum=0;
    for(i=1;i==1;){
        scanf("%d%d",&m,&n);
        if(m<=0 || n<=0){
            break;
        }
        else if(m>n){
            for(j=n;j<=m;j++){
                printf("%d ",j);
                sum=sum+j;
            }
            printf("Sum=%d\n",sum);
            sum=0;

        }
        else if(m<n){
            for(j=m;j<=n;j++){
                printf("%d ",j);
                sum=sum+j;
            }
            printf("Sum=%d\n",sum);
            sum=0;
        }
    }
}
