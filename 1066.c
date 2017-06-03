#include<stdio.h>
int main()
{
    int i,n,esum=0,osum=0,psum=0,nsum=0;
    for(i=1;i<=5;i++){
        scanf("%d",&n);
        if(n>=0 && n%2==0 || n<0 && n%2==-0){
            esum++;
        }
        if(n>=0 && n%2!=0 || n<0 && n%2!=-0){
            osum++;
        }
        if(n>0){
            psum++;
        }
        if(n<0){
            nsum++;
        }
    }
    printf("%d valor(es) par(es)\n",esum);
    printf("%d valor(es) impar(es)\n",osum);
    printf("%d valor(es) positivo(s)\n",psum);
    printf("%d valor(es) negativo(s)\n",nsum);
    
    return 0;
}
