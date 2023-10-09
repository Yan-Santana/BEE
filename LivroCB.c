#include <stdio.h>
#define MAX 30

// Definição de tipos
struct tLivro
{
    char titulo[MAX], autor[MAX];
    int ano;
};

// Função para cadastrar um livro
void cadLivro(int &n, tLivro v[])
{
    printf("\nTitulo: ");
	scanf(" %[^\n]", v[n].titulo);
	printf("Autor: ");
	scanf(" %[^\n]", v[n].autor);
	printf("Ano: ");
	scanf("%d", &v[n].ano);
    // inclementando no número e livros cadastrados
    n++;
}

//função para imprimir os dados dos livros de um certo ano informado pelo usuario
void listaporAno(int ano, int n, tLivro v[]){
    int aux = 0;
    for(int i=0; i<n; i++){
        if(ano == v[i].ano){
            printf("%s, %s, %d\n", v[i].titulo, v[i].autor, v[i].ano);
            aux++;
        }
    }
    if(aux==0)
        printf("Nenhum livro encontrado!");
}

// Função para procurar todos os nomes que começam com uma certa letra
void listaPorLetra(char letra, int n, tLivro v[]){
    int aux=0;
    for(int i=0; i<n; i++){
        if(letra == v[i].autor[0]){
            printf("%s, %s, %d.\n", v[i].titulo, v[i].autor, v[i].ano);
            aux++;
        }
    }
    if(aux==0){
        printf("Nenhum autor com esse nome encontrado!");
    }
}

// Função para imprimir MENU
void menu(){
    printf("\n\n1 - Cadastrar um livro");
	printf("\n2 - Listar livros por ano");
	printf("\n3 - Listar por inicial do nome do autor");
	printf("\n4 - Todos");
	printf("\n5 - Sair");
	printf("\nDigite sua opcao: ");
}

// Função para imprimir todos os livros cadastrados
void imprimir(int n, tLivro v[]){

    for(int i=0; i<n; i++){
        printf("%s, %s, %d.\n", v[i].titulo, v[i].autor, v[i].ano);
    }
    printf("\n\n");
}

// Função principal!+
int main(){
    tLivro vetor[MAX];
    int n=0, ano, opcao; // n = quantidade de livros cadastrados
    char letraa;

    do{
        //Chamo a função para imprimir o menu
        menu();
        scanf("%d", &opcao);

        if(opcao == 1){
            cadLivro(n, vetor);
            printf("Cadastro realizado com sucesso.\n");
        }
        else if(opcao == 2){
            printf("Qual o ano do livro que voce busca?\n");
            scanf("%d", &ano);
            listaporAno(ano, n, vetor);
        }
        else if(opcao == 3){
            printf("Qual a inicial do nome do autor?\n");
            scanf(" %c", &letraa);
            listaPorLetra(letraa, n, vetor);
        }
        else if(opcao == 4){
            imprimir(n, vetor);}

    }while (opcao != 5);

    return 0;
}







