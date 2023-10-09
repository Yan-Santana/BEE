/*Considere o seguinte processo para gerar uma sequência de números. Comece com um número inteiro positivo n. Se n é par, divida por 2. Se n é ímpar, multiplique por 3 e some 1. Repita esse processo com o novo valor de n, terminando quando n = 1.

Por exemplo, a sequência de números a seguir é gerada para n = 22:

22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1

É conjecturado que este processo termina com n = 1 para todo inteiro n > 0. Os números gerados nessa sequência são chamados de ciclo de n. Ademais, para um número n, o comprimento do ciclo de n é o número de elementos gerados na sequência. No exemplo acima, o comprimento do ciclo de 22 é 16.

Crie um programa (.cpp) para ler um número n inteiro, imprimir o ciclo de n e também imprimir o comprimento do ciclo. O programa deve conter uma função recursiva com a seguinte interface:

int ciclo (int n)

que receba um número inteiro n ≥ 1, imprima o ciclo de n e devolva o comprimento do ciclo de n.*/
#include <stdio.h>


int ciclo(int n) {
    printf("%d ", n);
    if(n == 1)
        return 1;

    else if(n % 2 == 1)
        return 1 + ciclo((n * 3) + 1);

    else
        return 1 + ciclo(n / 2);
}

int main(){

    int n;
    scanf("%d", &n);

    printf("%d", ciclo(n));

    return 0;
}
