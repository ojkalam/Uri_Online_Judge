#include<stdio.h>
int main()
{
    int n,x,i,in=0,out=0;
    scanf("%d",&n);
    if(n<10000){
      for(i=1;i<=n;i++){
          scanf("%d",&x);
          if(x>=10 && x<=20){
            in++;
          }
          else if(x<10 || x>20){
            out++;
          }
      }

       printf("%d in\n",in);
       printf("%d out\n",out);
      }


    return 0;
}
