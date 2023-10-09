/*PROGRAMA PARA CADASTRO E CONSULTA DE LIVROS*/
#include <stdio.h>
// constantes
#define MAX 30

// definicao de tipos
struct tLivro
{
	char titulo[MAX], autor[MAX];
	int ano;
};

// funcao para cadastrar um livro
void cadLivro (int &n, tLivro *v);


// funcao para imprimir os dados dos livros de um certo ano informado pelo usuario
void listaPorAno(int n, tLivro *v);


/* funcao para imprimir os dados dos livros cujo nome do autor comeca com uma letra
informada pelo usuario*/
void listaPorNome(int n, tLivro *v);


// funcao para imprimir o menu
void menu();

// funcao para imprimir todos os cadastrados
void imprimir(int n, tLivro *v);

// funcao principal
int main()
{
	tLivro vetor[MAX];
	int n = 0;			// qtde de livros cadastrados
	int opcao;

	do{
		// chamando a funcao p/ imprimir menu
		menu();
		scanf("%d", &opcao);

		if(opcao == 1){
			cadLivro(n, vetor);
			printf("Cadastro realizado com sucesso.\n");
		}
    else if (opcao == 2){
      listaPorAno(n, vetor);
      }
    else if (opcao == 3){
      listaPorNome(n, vetor);
    }
		else if(opcao == 4)
			imprimir(n, vetor);

	}while(opcao != 5);

	return 0;
}

// -----------------------------------------------------

void menu()
{
	printf("\n\n1 - Cadastrar um livro");
	printf("\n2 - Listar livros por ano");
	printf("\n3 - Listar por inicial do nome do autor");
	printf("\n4 - Todos");
	printf("\n5 - Sair");
	printf("\nDigite sua opcao: ");
}

void cadLivro(int &n, tLivro *v)
{
	printf("\nTitulo: ");
	scanf(" %[^\n]", v[n].titulo);
	printf("Autor: ");
	scanf(" %[^\n]", v[n].autor);
	printf("Ano: ");
	scanf("%d", &v[n].ano);

	// incrementando o numero de livros cadastrados
	n++;
}


void imprimir(int n, tLivro *v)
{
	printf("\n\n");
	for(int i = 0; i < n; i++)
		printf("%s, %s, %d.\n", v[i].titulo, v[i].autor, v[i].ano);

	printf("\n\n");
}
void listaPorAno(int n, tLivro *v)
{
  int ano;
  printf("Informe o ano: ");
  scanf("%d", &ano);
  for (int i = 0; i < n; i++){
    if (ano == v[i].ano)
      printf("%s, %s, %d.\n", v[i].titulo, v[i].autor, v[i].ano);
  }
}
void listaPorNome(int n, tLivro *v)
{
  char letra;
  int i;
  printf("Informe a letra: ");
  scanf("%s", &letra);
  for (int i = 0; i < n; i++) {
    if (letra == v[i].autor[0])
      printf("%s, %s, %d.\n", v[i].titulo, v[i].autor, v[i].ano);
  }


}
