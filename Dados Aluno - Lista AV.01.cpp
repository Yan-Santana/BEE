
/*Construa uma estrutura tAluno com número de matrícula, nome (com até 30 caracteres) e curso (com até 30 caracteres),
nesta ordem. Leia do usuário as informações de 5 alunos e armazene em vetor dessa estrutura. Em seguida, leia um nome de curso,
pesquise e liste todos os alunos (a matrícula e nome) que fazem o curso.

ENTRADA         ----         SAÍDA
1               ----
Joaquim Silva   ----        1 Joaquim Silva
Biologia        ----        5 Jucelino Fonseca

*/
#include <stdio.h>
#include <string.h>

#define MAX 31

struct tAluno{ // Registro onde será armazenado as informações do aluno
    int numMAt;
    char nome[MAX], curso[MAX];
};
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
int main(){
    tAluno Dados[5];
    char curs[MAX];

    for(int i=0; i<5; i++){
        scanf("%d", &Dados[i].numMAt); //Número de matricula
        scanf(" %[^\n]", Dados[i].nome); // Nome do aluno
        scanf(" %[^\n]", Dados[i].curso); // curso do aluno
    }
    scanf(" %[^\n]", curs); //Pergunta qual curso ele quer ter informações sobre

    for(int i=0; i<5; i++){
        if(strcmp(Dados[i].curso, curs) == 0){
            printf("%d %s\n", Dados[i].numMAt, Dados[i].nome);
        }
    }

    return 0;
}
