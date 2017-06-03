#include<stdio.h>
int main()
{
    float p1=4.00,p2=4.50,p3=5.00,p4=2.00,p5=1.50;
    int X,Y;
    scanf("%d%d",&X,&Y);
    if(X==1){
        p1=p1*Y;
        printf("Total: R$ %0.2f\n",p1);
    }
     else if(X==2){
        p2=p2*Y;
        printf("Total: R$ %0.2f\n",p2);

    }
    else if(X==3){
        p3=p3*Y;
        printf("Total: R$ %0.2f\n",p3);
    }
    else if(X==4){
        p4=p4*Y;
        printf("Total: R$ %0.2f\n",p4);
    }
    else if(X==5){
        p5=p5*Y;
        printf("Total: R$ %0.2f\n",p5);
    }

    return 0;
}
