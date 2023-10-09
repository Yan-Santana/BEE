#include <stdio.h>
#define MAX 100
int main() {
    int L[MAX],i, cont= 0, tam, maior;
    
    scanf(" %d", &tam);
    for(i=1; i<=tam; i++) {
        scanf(" %d", &L[i]);
    }
    cont = 0;
    maior = L[0];
    for(i=1; i<=tam; i++) {
        if(maior <= L[i] && i != 0)
            cont = 1;
    }
    
    if(cont == 0){
        printf("true");
        }
    else{
        printf("false");
        }
    return 0;
}
