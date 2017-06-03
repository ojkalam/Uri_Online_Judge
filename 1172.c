#include<stdio.h>
int main()
{
    int i,a=1,ary[10];
    for(i=0;i<10;i++){
        scanf("%d",&ary[i]);
    }
    for(i=0;i<10;i++){
        if(ary[i]<=0){
            printf("X[%d] = %d\n",i,a);
        }
        if(ary[i]>0){
            printf("X[%d] = %d\n",i,ary[i]);
        }
    }
    return 0;
}
