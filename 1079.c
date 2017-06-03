#include<stdio.h>
int main()
{
    int n,i;
    float x,y,z,ave;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%f%f%f",&x,&y,&z);
        ave=((x*2)+(y*3)+(z*5))/10;
        printf("%0.1f\n",ave);
    }
    return 0;
}
