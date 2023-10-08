#include <stdio.h>
#define MAX 100

int menorOuIgual10(int num) {
    if(num <= 10) return 1;
    else return 0;
}

int main(void) {

    double A[MAX];
    int i;

    for(i=0; i < 100; i++) {
        scanf("%lf", &A[i]);
    }

    for(i=0; i<100; i++) {
        if(menorOuIgual10(A[i])) {
            printf("A[%d] = %.1lf\n", i, A[i]);
        }
    }

    return 0;
}
