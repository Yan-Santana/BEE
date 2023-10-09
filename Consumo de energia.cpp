/*Faça um programa que controla o consumo de energia dos eletrodomésticos de uma casa e:
• Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potência (real, em kW) e tempo ativo por dia (real, em horas).
• Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo relativo de cada eletrodoméstico (consumo/consumo total)
nesse período de tempo. Apresente este último dado em porcentagem.

Dica: utilize %.2f para impressão dos valores reais com duas casas decimais.
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

    for(int i=0; i<5; i++){ 
        scanf(" %[^\n]", eletro[i].nome); 
        scanf("%f", &eletro[i].potencia);
        scanf("%f", &eletro[i].tempo); 

        tot += eletro[i].potencia * eletro[i].tempo; 
    }
    scanf("%d", &dias); 
    tot *= dias; 
    printf("\n");
    printf("%.2f\n", tot); 

    for(int i=0; i<5; i++){ 
        calc = (eletro[i].potencia * eletro[i].tempo * dias * 100) / tot;
        printf("%.2f\n", calc);
    }
    return 0;
}
