/* Programa para simular uma agenda de compromissos
Fa�a um programa para simular uma agenda de compromissos e:
� Crie e leia um vetor de 5 estruturas de dados com: compromisso (m�ximo 60 letras) e data, nesta ordem. A data deve ser outra estrutura de dados contendo dia, m�s e ano.
� Leia dois inteiros M e A e mostre todos os compromissos do m�s M do ano A. Repita o procedimento at� ler M = 0.
Dica: utilize  scanf("%d/%d/%d", &variavel_dia, &variavel_mes, &variavel_ano); para leitura formatada da data.*/
#include <stdio.h>
#define MAX 61

struct comp{ // Registro para guardar a string(texto) do compromisso
    char compromisso[MAX]; // At� 60 caracteres
};

struct data{ // Registro para guardar a data(dia, m�s, ano).
    int dia, mes, ano;
};

int main(){
    comp dadosCOMP[5];
    data DT[5];
    int Mcial, Acial, Mfinal, Afinal; // M == M�s; A == Ano;

    for(int i=0; i<5; i++){ //La�o para preencher os dados do Compromisso e datas

        //printf("Compromisso: ");
        scanf(" %[^\n]", dadosCOMP[i].compromisso);
        //printf("Data dia/mes/ano");
        scanf ("%d/%d/%d", &DT[i].dia, &DT[i].mes, &DT[i].ano);
        //printf("\n");

    }
    //printf("Data P/ pesquisa (MES/Ano): ");

    scanf("%d/%d\n", &Mcial, &Acial); // Data p/ filtragem de Compromissos
    scanf("%d/%d\n", &Mfinal, &Afinal); // Data p/ filtragem de Compromissos

    for(int i=0; i<5; i++){ // Vai verificar os Compromissos no struct(registro)
        if(Mcial == DT[i].mes && Acial == DT[i].ano)
            printf("%s\n", dadosCOMP[i].compromisso);
    }
    for(int i=0; i<5; i++){
        if(Mfinal == DT[i].mes && Afinal == DT[i].ano)
            printf("%s\n", dadosCOMP[i].compromisso);

     }


    return 0;
}
