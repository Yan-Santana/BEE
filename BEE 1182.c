#include <stdio.h>

int main(void) {
    int column, i ,j;
    char op;
    double mat[12][12], sum = 0.0;

    scanf("%d", &column);
    scanf(" %c", &op);

    for(i=0; i<12; i++) {
        for(j=0; j<12; j++) {
            scanf("%lf", &mat[i][j]);
        }
    }

    for(i=0; i<12; i++) 
        sum += mat[i][column];

    if(op == 'M')
        printf("%.1lf", sum/12.0);

    return 0;
}