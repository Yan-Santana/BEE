#include <stdio.h>
#define MAX 60


struct Dados{
    char nome[MAX+1];
    float sem1, sem2;
};

void menor(int n, Dados *v){
    float menor=0;

    for(int i=0; i<n; i++){
        if(v[0].sem2 < v[i].sem2)
            menor = v[i].sem2;
    }
    for(int i=0; i<n; i++){
        if(v[i].sem2 < menor){
            printf("%.1f %s\n", v[i].sem2, v[i].nome);
        }
    }

}

int main(){
    Dados gerente[MAX];
    int n;

    printf("Quatos Gerentes: ");
    scanf("%d", &n);


    for(int i=0; i<n; i++){
        printf("Nome: ");
        scanf(" %[^\n]", gerente[i].nome);

        printf("1/2 - Semestre: ");
        scanf("%f %f", &gerente[i].sem1, &gerente[i].sem1);
    }

    menor(n, gerente);


    return 0;
}
