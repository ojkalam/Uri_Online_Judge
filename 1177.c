#include<stdio.h>
int main()
{
    int i,j=0,t;
    scanf("%d",&t);
    for(i=0;i<1000;i++){
      if(j>=t){
        j=0;
      }
      printf("N[%d] = %d\n",i,j++);

    }
    return 0;
}
