#include<stdio.h>
int main()
{
    int i,n,hg,po;
    scanf("%d",&n);
    hg=n;
    po=1;
    for(i=1;i<=99;i++){
        scanf("%d",&n);
        if(n>hg){
            hg=n;
            po=i;
        }
    }
    po=po+1;
    printf("%d\n",hg);
    printf("%d\n",po);
    return 0;
}
