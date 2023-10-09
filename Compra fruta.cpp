/*Beecrowd 1281 - Dona Parcinova costuma ir regularmente à feira para comprar frutas e legumes. Ela pediu então à sua filha, Mangojata,
que a ajudasse com as contas e que fizesse um programa que calculasse o valor que precisa levar para poder comprar tudo que está em sua
lista de compras, considerando a quantidade de cada tipo de fruta ou legume e os preços destes itens.

Entrada
A primeira linha de entrada contém um inteiro N que indica a quantidade de idas à feira de dona Parcinova (que nada mais é do que o
número de casos de teste que vem a seguir). Cada caso de teste inicia com um inteiro M que indica a quantidade de produtos que estão
disponíveis para venda na feira. Seguem os M produtos com seus preços respectivos por unidade ou Kg. A próxima linha de entrada contém
um inteiro P (1 ≤ P ≤ M) que indica a quantidade de diferentes produtos que dona Parcinova deseja comprar. Seguem P linhas contendo
cada uma delas um texto (com até 50 caracteres) e um valor inteiro, que indicam respectivamente o nome de cada produto e a quantidade
deste produto.


Saída
Para cada caso de teste, imprima o valor que será gasto por dona Parcinova no seguinte formato:
R$ seguido de um espaço e seguido do valor, com 2 casas decimais, conforme o exemplo abaixo.
*/
#include <stdio.h>
#include <string.h>
#define MAX 51

struct frutas {
    char nome[MAX];
    float preco;
};

int main() {
    int q, P, i, quantP, quantF;  
    char frut[MAX];
    float total;

    scanf("%d\n", &q); 
    while(q --){
        scanf("%d", &quantP); 
        frutas compra[quantP]; 

        for(i=0; i<quantP; i++) {
            scanf(" %s", compra[i].nome); 
            scanf("%f", &compra[i].preco);
        }

        scanf("%d", &P); 
        total = 0.0;

        for(i=0; i< P; i++) {
            scanf(" %s", frut);
            scanf("%d\n", &quantF);    

            for(int j=0; j < quantP; ++j) {
                if (strcmp(compra[j].nome, frut) == 0) {
                    total += compra[j].preco * quantF; 
                    break;
                }
            }
        }
        printf("R$ %.2lf\n", total);
    }
    return 0;
}
