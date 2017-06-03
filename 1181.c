#include <stdio.h>

int main() {
    char ch;
    int i, j, n;
    float sum = 0.0, a;

    scanf("%d ", &n);
    scanf("%c", &ch);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%f", &a);
            if (i == n){
                sum=sum+a;
            }
        }
    }

    if (ch == 'S'){
       printf("%.1f\n", sum);
    }
    else {
        printf("%.1f\n", sum / 12);
    }
    return 0;
}
