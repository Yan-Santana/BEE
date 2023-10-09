/*Fa�a um programa que controla o consumo de energia dos eletrodom�sticos de uma casa e:
� Crie e leia 5 eletrodom�sticos que cont�m nome (m�ximo 15 letras), pot�ncia (real, em kW) e tempo ativo por dia (real, em horas).
� Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo relativo de cada eletrodom�stico (consumo/consumo total)
nesse per�odo de tempo. Apresente este �ltimo dado em porcentagem.

Dica: utilize %.2f para impress�o dos valores reais com duas casas decimais.
*/
#include <stdio.h>
#define MAX 15

struct eletronicos{
  char nome[MAX+1];
  float potencia, tempo;
};

int main(){
    eletronicos eletro[5];

    float tot =0, calc;
    int dias = 0;

    for(int i=0; i<5; i++){ // La�o para preencher os dados e colocar no registro
        scanf(" %[^\n]", eletro[i].nome); //Nome do eletrodom�stico
        scanf("%f", &eletro[i].potencia); // Potencia
        scanf("%f", &eletro[i].tempo); // Tempo

        tot += eletro[i].potencia * eletro[i].tempo; // Vai calcular o valor de cada eletrodom�stico e ir somando com o anterior
    }

    scanf("%d", &dias); // Pergunta a quantidade de dias
    tot *= dias; // multiplica o total X a quantidade de dias
    printf("\n");
    printf("%.2f\n", tot); // mostra o total na tela

    for(int i=0; i<5; i++){ // la�o que ir� calcular o consumo e retornar com uma porcentagem
        calc = (eletro[i].potencia * eletro[i].tempo * dias * 100) / tot;
        printf("%.2f\n", calc);
    }
    return 0;
}
