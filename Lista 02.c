#include <stdio.h>
#define MAX 100
int main()

{
    int L[MAX],i, cont= 0, tam;

    //entrada de dados para saber o tamanho do vetor
    scanf(" %d", &tam);
    //Laço que irá preencher os dados do vetor
    for(i=1; i<=tam; i++){
        scanf(" %d", &L[i]);
        if(L[i]<L[i+1])
            cont += 1;
    }
    // Verificação
    if(cont > 1){
        printf("true");
        }
    else{
        printf("false");
        }



    return 0;
}
