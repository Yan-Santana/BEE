// Programa: somaimpar.cpp
// Este programa lê dois números inteiros,
// inicio e fim e calcula a soma dos numeros
// inteiros ímpares entre inicio e fim,
// inclusive inicio e fim
// Declaração das biliotecas utilizadas
#include<stdio.h>

// início da função principal
int main() {
// declaração das variáveis utilizadas
    int inicio, fim, soma;
    soma = 0;

// Passo 1. Leia a entrada e inicialize soma
    scanf("%d%d", &inicio, &fim);

// Passo 2. Calcule a soma em [inicio,fim]
    for(inicio; inicio <= fim; inicio++){
        if (inicio % 2 != 0){
        soma += inicio;}
    }


// Passo 2.1. Verifique se inicio é impar

// Passo 3. Imprima o resultado
   printf("%d\n", soma);

   return 0;

} // fim main
