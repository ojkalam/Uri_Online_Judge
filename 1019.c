#include<stdio.h>
int main()
{
    int N, minute, hour,second;
    scanf("%d",&N);

    hour=N/3600;
    minute=(N%3600)/60;
    second=N%60;

    printf("%d:%d:%d\n", hour,minute,second);
    return 0;

}
