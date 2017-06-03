#include<stdio.h>
int main()
{
    int x,y,i,j,sum=0;
    scanf("%d%d",&x,&y);
     while(y<=0){
        scanf("%d",&y);
     }
    for(j=1;j<=y;j++){
        sum=sum+x;
        x++;
    }
    printf("%d\n",sum);
}
