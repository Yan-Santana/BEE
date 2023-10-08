#include <stdio.h>

int main(void) {
    char caracter;
    scanf(" %c", &caracter);

    float mat[12][12];

    for(int i = 0; i < 12; i++) { 
        for(int j = 0; j < 12; j++) { 
            scanf("%f", &mat[i][j]);
        }
    }

    float sum = 0;

    for (int i = 1; i < 10; i++) {
        if(i <= 5) {
            for(int j = 11; j > 11 - i; j--) {
                sum += mat[i][j];
            }
        } else {
            for(int j = 11; j > i; j--) {
                sum += mat[i][j];
            }
        }
    }

    int greenArea = 30;
    if(caracter == 'M') 
        sum /= greenArea;
    
    printf("%.1f\n", sum);
    
    return 0;
}