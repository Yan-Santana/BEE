#include <stdio.h>

int main() {
    int pares[5];
    int impares[5];
    int valor;
    int qtd_pares = 0;
    int qtd_impares = 0;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &valor);

        if (valor % 2 == 0) { 
            pares[qtd_pares] = valor;
            qtd_pares++;

            if (qtd_pares == 5) {
                
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, pares[j]);
                }
                qtd_pares = 0;
            }
        } else { 
            impares[qtd_impares] = valor;
            qtd_impares++;

            if (qtd_impares == 5) {
                
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impares[j]);
                }
                qtd_impares = 0;
            }
        }
    }
    
    for (int i = 0; i < qtd_impares; i++) 
        printf("impar[%d] = %d\n", i, impares[i]);
    
    for (int i = 0; i < qtd_pares; i++) 
        printf("par[%d] = %d\n", i, pares[i]);

    return 0;
}
