//#include <iostream>
#include <stdio.h>

#define MAX 50

void intercala(int p, int q, int r, int v[MAX]){
  int i, j, k, w[MAX];

  i = p; j = q; k = 0;
  while(i < q && j < r) {
    if(v[i] < v[j]){
      w[k] = v[i]; i++;
    }
    else{
      w[k] = v[j]; j++;
    }
    k++;
  }
  while(i < q){
    w[k] = v[i]; i++; k++;
    }
  while(j < r){
    w[k] = v[j]; j++; k++;
  }
  for(i = p; i < r; i++) {
    v[i] = w[i - p];
  }
}

void mergesort(int p, int r, int v[MAX]){
  int q;
  if(p < r - 1)
    {
    q = (p + r) / 2;
    mergesort(p, q, v);
    mergesort(q, r, v);
    intercala(p, q, r, v);
    }
}

int main()
{
  int i, tam;
  int v[MAX];

  printf("Digite o tamanho do vetor:\n");
  scanf("%d", &tam);

  printf("Digite os valores do vetor:\n");

  for(i=0; i< tam; i++)
  {
    scanf("%d", &v[i]);
  }

  mergesort(0, tam, v);

  for(i=0; i< tam; i++)
  {
    printf("%d ", v[i]);
  }
  printf("\n");
  return 0;
}
