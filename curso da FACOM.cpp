#include <stdio.h>
#define MAX 10

int main(){
    int tam, L[MAX], i, maior,cont;
    // Coleta os dodos
    scanf(" %d\n", &tam);
    //Preenche os dados no vetor
    for(i=1;i<=tam;i++){
        scanf(" %d", &L[i]);

    }
    //Fala que o primeiro indice dentro do vetor é o maior,
    //após isso seleciona se ele é maior e soma um na variavel cont
    maior = L[1];
    cont = 1;

    for(i=2; i != tam; i++){
        if(L[i] > maior){
            cont += 1;
            printf(" %d", L[i]);
        }
    }

    if(cont <= tam-1){
        printf("true");
    }
    else{
        printf("false");
    }
    printf(" %d\n%d", tam, cont);
    return 0;
}
