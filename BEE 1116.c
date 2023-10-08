#include <stdio.h>

int factorial(int num) {
    int aux = 1;

    for(int i = 1; i <= num; i++) 
        aux *= i;
    
    return aux;
}

int main(void) {
    int M,N;

    while(scanf("%d %d", &M, &N) != EOF) {
        
        int fatM = factorial(M);
        int fatN = factorial(N);

        printf("%d\n", fatM + fatN);
    }
    
    return 0;
}