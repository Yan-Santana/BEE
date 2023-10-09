#include<stdio.h>
#include <string.h>

#define NUMQ 5
#define MAX 100

// Calcular o número de acertos do estudante
int acertos(char *gab, char *resp){
    int cont =0;
    for(int i=0; gab[i] != '\0'; i++){
        if(gab[i] == resp[i])
            cont++;
    }
    return cont;
}



int main()
{
	char gabarito[NUMQ+1];
	char respostas[MAX];

	int n;	// numero de alunos
	int i, total, cont;

	// leitura do gabarito
	printf("Informe o gabarito: ");
	scanf(" %[^\n]", gabarito);

	// leitura das respostas de cada aluno com a impressao do total de acertos
	printf("Informe quantidade de alunos: ");
	scanf("%d", &n);

	for(int i=0; i<n; i++){
	    printf("Digite seus acertos: ");
	    scanf(" %[^\n]", respostas);
	    printf("%d\n\n",acertos(gabarito, respostas));
	}

	return 0;
}
