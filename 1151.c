#include<stdio.h>
int main()
{
    int n,i,f=0 ,s=1,sum;
    scanf("%d",&n);
    for(i=0;i<n-1;i++){
            if(i<=1){
                sum=i;
            }
            else{
            sum=f+s;
            f=s;
            s=sum;
            }

            printf("%d ",sum);

    }

    printf("%d\n",f+s);
    return 0;
}
