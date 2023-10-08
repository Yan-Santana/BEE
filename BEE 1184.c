#include <stdio.h>

int main(void) {
    int i,j, count = 0;
    double result = 0.0, mat[12][12];
    char operation;

    scanf(" %c", &operation);

    for(i = 0; i < 12; i++) { 
        for(j = 0; j < 12; j++) { 
            scanf("%lf", &mat[i][j]);
        }
    }

    for(i=0; i<12; i++) {
        for(j=0; j<i; j++) {
            result += mat[i][j];
            count++;
        }
    }
    
    if(operation == 'M') 
        result /= count;
    
    printf("%.1f\n", result);
    
    return 0;
}