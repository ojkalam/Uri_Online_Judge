#include<stdio.h>
int main()
{
    int n[20],i,j;
    for(i=0;i<20;i++){
       scanf("%d",&n[i]);

    }
    j=0;
    for(i=19;i>=0;i--){
        printf("N[%d] = %d\n",j++,n[i]);

    }
    return 0;
}
