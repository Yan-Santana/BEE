// Programa: somaimpar.cpp
// Este programa l� dois n�meros inteiros,
// inicio e fim e calcula a soma dos numeros
// inteiros �mpares entre inicio e fim,
// inclusive inicio e fim
// Declara��o das biliotecas utilizadas
#include<stdio.h>

// in�cio da fun��o principal
int main() {
// declara��o das vari�veis utilizadas
    int inicio, fim, soma;
    soma = 0;

// Passo 1. Leia a entrada e inicialize soma
    scanf("%d%d", &inicio, &fim);

// Passo 2. Calcule a soma em [inicio,fim]
    for(inicio; inicio <= fim; inicio++){
        if (inicio % 2 != 0){
        soma += inicio;}
    }


// Passo 2.1. Verifique se inicio � impar

// Passo 3. Imprima o resultado
   printf("%d\n", soma);

   return 0;

} // fim main
