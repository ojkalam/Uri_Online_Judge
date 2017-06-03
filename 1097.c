#include<stdio.h>
int main()
{
    int I=1,J=7,i,j;
     for(i=1;i<=3;i++){
        printf("I=%d J=%d\n",I,J);
        J--;
        }
     for(i=1;i<=3;i++){
        printf("I=%d J=%d\n",I+2,J+5);
        J--;
        }
     for(i=1;i<=3;i++){
        printf("I=%d J=%d\n",I+4,J+10);
        J--;
        }
     for(i=1;i<=3;i++){
        printf("I=%d J=%d\n",I+6,J+15);
        J--;
        }
     for(i=1;i<=3;i++){
        printf("I=%d J=%d\n",I+8,J+20);
        J--;
        }
        
     return 0;
}
