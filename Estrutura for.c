// Programa: somaimpar.cpp
// Este programa lê dois números inteiros,
// inicio e fim e calcula a soma dos numeros
// inteiros ímpares entre inicio e fim,
// inclusive inicio e fim
// Declaração das biliotecas utilizadas
#include<stdio.h>

int main() {
    int inicio, fim, soma;
    soma = 0;
    
    scanf("%d%d", &inicio, &fim);

    for(inicio; inicio <= fim; inicio++) {
        if (inicio % 2 != 0){
        soma += inicio;}
    }
   printf("%d\n", soma);
   return 0;
} 
