#include <stdio.h>


struct celula{
   int valor;
   struct celula *prox;
};





int main(){
    celula reg1, reg2, *p;

    scanf("%d %d", &reg1.valor, &reg2.valor);
    reg1.prox = &reg2;
    reg2.prox = NULL;
    for(p = &reg1; p != NULL; p = p->prox){
        printf("%d", p->valor);
    }
    printf("\n");

    return 0;


    return 0;
}
