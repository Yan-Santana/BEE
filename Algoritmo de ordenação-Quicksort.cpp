#include <stdio.h>

#define MAX 50

void troca(int &a, int &b){
  int aux;
  aux = a;
  a = b;
  b = aux;
}

int separa(int p, int r, int v[MAX]){
  int x, i, j;
  x = v[p];
  i = p - 1;
  j = r + 1;

  while (1) {
    do {
      j--;
    } while (v[j] > x);
    do {
      i++;
    } while (v[i] < x);
    if (i < j)
      troca(v[i], v[j]);
    else
      return j;
  }
}

void quicksort(int p, int r, int v[MAX]){
  int q;
  if (p < r) {
    q = separa(p, r, v);
    quicksort(p, q, v);
    quicksort(q+1, r, v);
  }
}

int main() {
  int i, tam;
  int v[MAX];

  printf("Digite o tamanho do vetor:\n");
  scanf("%d", &tam);

  printf("Digite os valores do vetor:\n");

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
