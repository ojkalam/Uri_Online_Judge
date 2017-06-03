#include<stdio.h>
int main()
{
    int d1,d2,h1,h2,m1,m2,s1,s2,t1,t2,T;
    char *dia1,*dia2;
    scanf("%s %d",&dia1,&d1);
    //scanf("%d",&d1);
    scanf("%d : %d : %d",&h1,&m1,&s1);

    scanf("%s %d",&dia2,&d2);
    //scanf("%d",&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);

    t1=(d1*86400)+(h1*3600)+(m1*60)+s1;
    t2=(d2*86400)+(h2*3600)+(m2*60)+s2;


    //if(t1>t2){
        T=t2-t1;
        d1 = T/86400;
        h1 = (T%86400)/3600;
        m1 = (((T%86400)%3600)/60);
        s1 = (((T%86400)%3600)%60);
        printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d1,h1,m1,s1);


    /*else if(t1<t2){
        T=t2-t1;
        d1 = T/86400;
        h1 = (T%86400)/360;
        m1 = (((T%86400)%3600)/60);
        s1 = (((T%86400)%3600)%60);
        printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d1,h1,m1,s1);

    }*/

    return 0;
}
