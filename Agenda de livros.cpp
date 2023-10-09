/* Programa para simular uma agenda de compromissos
Faça um programa para simular uma agenda de compromissos e:
• Crie e leia um vetor de 5 estruturas de dados com: compromisso (máximo 60 letras) e data, nesta ordem. A data deve ser outra estrutura de dados contendo dia, mês e ano. 
• Leia dois inteiros M e A e mostre todos os compromissos do mês M do ano A. Repita o procedimento até ler M = 0.
Dica: utilize  scanf("%d/%d/%d", &variavel_dia, &variavel_mes, &variavel_ano); para leitura formatada da data.*/
#include <stdio.h>
#define MAX 60

struct comp{
    char compromisso[MAX];
};

struct data{
    int dia[5], mes[5], ano[5];
};

int main(){
    comp dadosCOMP[MAX];
    data DT[5];
    int M, A; 

    for(int i=0; i<5; i++){
        printf("Compromisso: ");
        scanf(" %[^\n]", dadosCOMP[i].compromisso);
        printf("Data: ");
        scanf("%d/%d/%d", DT[i].dia, DT[i].mes, DT[i].ano);
    }

    printf("Data P/ pesquisa (MES/ANO):");
    scanf("%d/%d", &M, &A);

    for(int i=0; i<5;i++){
        if(M == DT[i].mes && A == DT[i].ano){
            printf(" %s\n", dadosCOMP[i].compromisso);
        }
    }
    return 0;
}
