#include <stdio.h>

#define MAX 100

void troca(int &a, int &b){
  int aux;
  aux = a;
  a = b;
  b = aux;
}
int separa(int vet[], int esq, int dir){
    int i = esq + 1, j = dir;

    int c = vet[esq], troca;

    while(i <= j){

        if(vet[i] >= c)

            i++;

        else if(c > vet[j])

            j--;

        else{

            troca = vet[i];

            vet[i] = vet[j];

            vet[j] = troca;

            }

    }

        i = j + 1;

        vet[esq] = vet[j];

        vet[j] = c;

    return j;

}


void quicksort(int p, int r, int v[MAX]){
  int q;
  if (p < r) {
    q = separa(v, p, r);
    quicksort(p, q, v);
    quicksort(q+1, r, v);
  }
}

int main() {
  int i, tam;
  int v[MAX];

  scanf("%d", &tam);


  for(i=0; i< tam; i++){
    scanf("%d", &v[i]);
  }

  quicksort(0, tam-1, v);

  for(i=0; i< tam; i++){
    printf("%d ", v[i]);
  }
  printf("\n");

  return 0;
}
