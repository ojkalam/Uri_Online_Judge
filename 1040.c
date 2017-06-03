#include<stdio.h>
int main()
{
    float n1,n2,n3,n4,ave,m,sum;
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);

    ave=((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;

    printf("Media: %0.1f\n",ave);
    if(ave>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if(ave<5.0){
        printf("Aluno reprovado.\n");
    }
    else if(ave>=5.0 && ave<=6.9){
        printf("Aluno em exame.\n");

    scanf("%f",&m);
    printf("Nota do exame: %0.1f\n",m);

    sum=(ave+m)/2;

    {
    if(sum>=5.0){
        printf("Aluno aprovado.\n");
    }
    else if(sum<=4.9){
        printf("Aluno reprovado.\n");
    }

    }
        printf("Media final: %0.1f\n",sum);

    }
    return 0;
}
