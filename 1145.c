#include<stdio.h>
int main()
{
    int x,y,i,j;
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;){
           for(j=1;j<=x;j++){
            if(i>y){
                break;
            }
            if(j==1){
            printf("%d",i++);
            }
            else{
            printf(" %d",i++);
            }

        }

        printf("\n");

    }
    return 0;
}
