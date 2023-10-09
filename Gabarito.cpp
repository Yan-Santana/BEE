#include<stdio.h>
#include <string.h>

#define NUMQ 5
#define MAX 100

int acertos(char *gab, char *resp){
    int cont =0;
    for(int i=0; gab[i] != '\0'; i++){
        if(gab[i] == resp[i])
            cont++;
    }
    return cont;
}

int main() {
	char gabarito[NUMQ+1];
	char respostas[MAX];

	int n;	
	int i, total, cont;
	
	printf("Informe o gabarito: ");
	scanf(" %[^\n]", gabarito);

	printf("Informe quantidade de alunos: ");
	scanf("%d", &n);

	for(int i=0; i<n; i++){
	    printf("Digite seus acertos: ");
	    scanf(" %[^\n]", respostas);
	    printf("%d\n\n",acertos(gabarito, respostas));
	}
	return 0;
}
